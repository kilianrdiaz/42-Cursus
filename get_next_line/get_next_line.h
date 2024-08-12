/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:02:57 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/08/08 18:04:40 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	char			*buf;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
char	*get_line(t_list *list);

int		find_newline(t_list *list);
int		get_length(t_list *list);

void	create_list(t_list **list, int fd);
void	save_line(t_list **list, char *buf);
void	copy_str(t_list *list, char *next_line);
void	clean_list(t_list *list);
void	dealloc(t_list **list, t_list *cleaned_node, char *buf);

t_list	*get_last_node(t_list *list);

#endif
