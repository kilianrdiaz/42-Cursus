/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:32:34 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/03 15:32:34 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char   ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *rtn;
    int     i;

    i = 0;
    if (!(rtn = ft_strdup(s)))
        return (NULL);
    while (rtn[i])
    {
        rtn[i] = (*f)(i, rtn[i]);
        i++;
    }
    return (rtn);
}