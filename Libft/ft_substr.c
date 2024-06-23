/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:31:51 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/23 18:50:50 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		slen;
	char	*subs;

	slen = 0;
	while (s[slen])
		slen++;
	if ((slen - start) <= len)
		return (0);
	subs = (char *) malloc(len * sizeof(char));
	if (subs == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	return (subs);
}
