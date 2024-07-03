/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:55:53 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/03 15:55:53 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
    return ;
}