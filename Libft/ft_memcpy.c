/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:52:36 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/17 11:52:36 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *memcpy(void *dest, const void *src, unsigned int n)
{
    int     i;

    i = 0;
    while (i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (dest);
}