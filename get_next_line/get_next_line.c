
//TODO header

#include "get_next_line.h"

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
	line = (char *)malloc((ft_strlen(buf) - i + 1) * sizeof(char));
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

	if (!buf)
		return (NULL);
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	line = (char *)malloc((i + 2) * sizeof(char));
	i = 0;
	while (buf[i] && buf[i] != '\n')
	{
		line[i] = buf[i];
		i++;
	}
	if (buf[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*join_line(char *old_ret, char *line)
{
	char	*ret;

	ret = ft_strjoin(old_ret, line);
	free(old_ret);
	return (ret);
}

char	*read_file(int fd, char *ret)
{
	char	*line;
	int		char_read;

	if (!ret)
		ret = (char *)malloc(sizeof(char));
	line = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	char_read = 1;
	while (char_read > 0)
	{
		char_read = read(fd, line, BUFFER_SIZE);
		if (char_read == -1)
		{
			free(line);
			return (NULL);
		}
		line[char_read] = '\0';
		ret = join_line(ret, line);
		if (ft_strchr(line, '\n') != 0)
			break;
	}
	free(line);
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line;
	
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buf = read_file(fd, buf);
	if (!buf)
		return (NULL);
	line = clean_line(buf);
	buf = next_line(buf);
	return (line);
}
