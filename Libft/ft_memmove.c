/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:16:54 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/26 18:45:15 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;

	if (s1 < s2)
		return (ft_memcpy(s1, s2, n));
	p1 = (char *)s1;
	p2 = (char *)s2;
	if (!n || s1 == s2)
		return (s1);
	while (n > 0)
	{
		p1[n] = p2[n];
		n--;
	}
	return (s1);
}
