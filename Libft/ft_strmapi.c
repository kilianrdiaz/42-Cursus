/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:47:03 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/03 20:52:27 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rtn;
	int		i;

	i = 0;
	rtn = ft_strdup(s);
	if (!rtn)
		return (NULL);
	while (rtn[i])
	{
		rtn[i] = (*f)(i, rtn[i]);
		i++;
	}
	return (rtn);
}
