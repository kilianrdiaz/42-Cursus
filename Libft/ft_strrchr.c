/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:18:46 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/21 19:18:46 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *str, int c)
{
    int i;
    char    *found;

    found = '0';
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            found = &str[i];
        i++;
    }
    if (str[i] == c)
        found = &str[i];
    return (found);
}