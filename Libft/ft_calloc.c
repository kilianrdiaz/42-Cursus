/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:58:27 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/23 18:52:11 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	char	*temp;
	int		i;

	i = 0;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	temp = (char *)ptr;
	while (i < nmemb)
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}
