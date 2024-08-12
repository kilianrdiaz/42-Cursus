#include "get_next_line.h"

void	dealloc(t_list **list, t_list *cleaned_node, char *buf)
{
	t_list	*tmp;

	if (*list == NULL)
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		free((*list)->buf);
		free(*list);
		*list = tmp;
	}
	*list = NULL;
	if (cleaned_node->buf[0])
		*list = cleaned_node;
	else
	{
		free(buf);
		free(cleaned_node);
	}
}

void	copy_str(t_list *list, char *next_line)
{
	int	i;
	int j;

	if (list == NULL)
		return ;
	j = 0;
	while (list)
	{
		i = 0;
		while (list->buf[i])
		{
			if (list->buf[i] == '\n')
			{
				next_line[j] = '\n';
				next_line[++j] = '\0';
				return ;
			}
			next_line[j++] = list->buf[i++];
		}
		list = list->next;
	}
	next_line[j] = '\0';
}

int	get_length(t_list *list)
{
	int	i;
	int	len;
	
	if (list == NULL)
		return (0);
	len = 0;
	while (list)
	{
		i = 0;
		while (list->buf[i])
		{
			if (list->buf[i] == '\n')
			{
				len++;
				return (len);
			}
			i++;
			len++;
		}
		list = list->next;
	}
	return (len);
}

int	find_newline(t_list *list)
{
	int	i;

	if (list == NULL)
		return (0);
	while (list)
	{
		i = 0;
		while (list->buf[i] && i < BUFFER_SIZE)
		{
			if (list->buf[i] == '\n')
				return (1);
			i++;
		}
		list = list->next;
	}
	return (0);
}

t_list	*get_last_node(t_list *list)
{
	if (list == NULL)
		return (NULL);

	while (list->next)
		list = list->next;
	return (list);
}
