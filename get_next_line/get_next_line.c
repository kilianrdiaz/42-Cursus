/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:02:08 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/08/19 21:45:09 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_list	*list;
	char			*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0 ,0) < 0)
		return (NULL);
	create_list(&list, fd);
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}
	next_line = obtain_line(list);
	if (!next_line)
	{
		free(next_line);
		return (NULL);
	}
	clean_list(&list);
	return (next_line);
}

void	create_list(t_list **list, int fd)
{
	int		char_read;
	char	*buf;

	while (!find_newline(*list))
	{
		buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (buf == NULL)
			return ;
		char_read = read(fd, buf, BUFFER_SIZE);
		if (!char_read)
		{
			free(buf);
			return ;
		}
		buf[char_read] = '\0';
		save_line(list, buf);
	}
}

void	save_line(t_list **list, char *buf)
{
	t_list	*new_node;
	t_list	*last_node;

	last_node = get_last_node(*list);
	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return ;
	if (last_node == NULL)
		*list = new_node;
	else
		last_node->next = new_node;
	new_node->buf = buf;
	new_node->next = NULL;
}

char	*obtain_line(t_list *list)
{
	int		str_len;
	char	*next_str;

	if (list == NULL)
		return (NULL);
	str_len = get_length(list);
	next_str = (char *)malloc((str_len + 1) * sizeof(char));
	if (next_str == NULL)
		return (NULL);
	copy_str(list, next_str);
	return (next_str);
}

void	clean_list(t_list **list)
{
	int		i;
	int		j;
	char	*buf;
	t_list	*last_node;
	t_list	*cleaned_node;

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	cleaned_node = malloc(sizeof(t_list));
	if (buf == NULL || cleaned_node == NULL)
		return ;
	last_node = get_last_node(*list);
	i = 0;
	j = 0;
	while (last_node->buf[i] != '\n' && last_node->buf[i] != '\0')
		i++;
	while (last_node->buf[i] != '\0' && last_node->buf[++i])
		buf[j++] = last_node->buf[i];
	buf[j] = '\0';
	cleaned_node->buf = buf;
	cleaned_node->next = NULL;
	dealloc(list, cleaned_node, buf);
}
