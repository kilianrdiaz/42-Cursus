/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:33:19 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/21 19:33:19 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    const char  *s;
    size_t i;

    s = (const char *)str;
    i = 0;
    while (i < n)
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    return (0);
}