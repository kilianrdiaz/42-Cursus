/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:07:45 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/21 19:07:45 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int c)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    if (str[i] == c)
        return (&str[i]);
    return (0);
}