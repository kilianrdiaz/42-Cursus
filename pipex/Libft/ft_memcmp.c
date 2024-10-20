/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:26:49 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/05 20:36:12 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ss1;
	const char	*ss2;
	size_t		i;

	if (n == 0)
		return (0);
	i = 0;
	ss1 = (const char *)s1;
	ss2 = (const char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
		i++;
	}
	return (0);
}
