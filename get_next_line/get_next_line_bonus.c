/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:58:01 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/09/11 19:09:20 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*next_line(char *buf)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (!buf[i])
	{
		free(buf);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buf) - i + 1), sizeof(char));
	if (!line)
	{
		free(buf);
		return (NULL);
	}
	i++;
	j = 0;
	while (buf[i])
		line[j++] = buf[i++];
	free(buf);
	return (line);
}

char	*clean_line(char *buf)
{
	char	*line;
	int		i;

	i = 0;
	if (!buf[i])
		return (NULL);
	while (buf[i] && buf[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buf[i] && buf[i] != '\n')
	{
		line[i] = buf[i];
		i++;
	}
	if (buf[i] == '\n')
		line[i] = '\n';
	return (line);
}

char	*join_line(char *old_ret, char *line)
{
	char	*ret;

	ret = ft_strjoin(old_ret, line);
	free(old_ret);
	old_ret = NULL;
	return (ret);
}

char	*read_file(int fd, char *ret)
{
	char	*line;
	int		char_read;

	if (!ret)
		ret = ft_calloc(1, 1);
	line = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!line)
		return (NULL);
	char_read = 1;
	while (ft_strchr(line, '\n') == NULL && char_read > 0)
	{
		char_read = read(fd, line, BUFFER_SIZE);
		if (char_read == -1)
		{
			free(ret);
			free(line);
			return (NULL);
		}
		line[char_read] = '\0';
		ret = join_line(ret, line);
	}
	free(line);
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*buf[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX
		|| fd >= OPEN_MAX)
		return (NULL);
	buf[fd] = read_file(fd, buf[fd]);
	if (!buf[fd])
		return (NULL);
	line = clean_line(buf[fd]);
	if (!line)
	{
		free(buf[fd]);
		buf[fd] = NULL;
		return (NULL);
	}
	buf[fd] = next_line(buf[fd]);
	return (line);
}
