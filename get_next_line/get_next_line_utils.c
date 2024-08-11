#include "get_next_line.h"

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
