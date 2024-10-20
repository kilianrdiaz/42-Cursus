/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:55:57 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/05 20:09:09 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	src_len;
	unsigned int	dst_len;
	unsigned int	i;

	src_len = 0;
	dst_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst[dst_len] != '\0')
		dst_len++;
	if (size == 0)
		return (src_len);
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (i < src_len && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
