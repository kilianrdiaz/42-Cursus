//TODO header

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
char	*get_next_line(int fd);
char	*read_file(int fd, char *ret);
char	*join_line(char *old_ret, char *line);
char	*clean_line(char *buf);
char	*next_line(char *buf);

#endif
