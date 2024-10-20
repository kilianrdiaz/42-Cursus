/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:47:03 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/09 14:23:53 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rtn;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	rtn = malloc(sizeof(char) * (len + 1));
	if (!rtn)
		return (NULL);
	while (s[i])
	{
		rtn[i] = f(i, s[i]);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
