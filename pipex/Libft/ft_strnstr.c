/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:53:57 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/08 15:17:24 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0' || find == NULL)
		return ((char *)s);
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i] == find[j] && s[i] && i < len)
		{
			i++;
			j++;
		}
		if (!find[j])
			return ((char *)&s[i - j]);
		i = (i - j) + 1;
	}
	return (0);
}
