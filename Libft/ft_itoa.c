/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 23:19:50 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/02 23:19:50 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_convert(int n, char *rtn, int i)
{
	int	mod;

	while (n != 0)
	{
		mod = n % 10;
		rtn[--i] = '0' + mod;
		n /= 10;
	}
}

char    *ft_itoa(int n)
{
    char	*rtn;
	int		neg;
	int		temp;
	int		i;

	i = 0;
	neg = 0;
    if (n < 0)
	{
        n = n * (-1);
		neg = 1;
		i++;
	}
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		i++;
	}
	rtn = (char *)malloc(sizeof(char) * i);
	if (!rtn)
		return (NULL);
	if (neg)
		rtn[0] = '-';
	ft_convert(n, rtn, i);
}