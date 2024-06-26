/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:58:27 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/26 18:55:37 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	char	*temp;
	size_t	i;

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
