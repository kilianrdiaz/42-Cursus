/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:40:26 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/29 17:24:04 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr(int n, int *count)
{
	if (n == -2147483648)
		ft_printstr("-2147483648", count);
	else if (n < 0)
	{
		ft_printchar('-', count);
		ft_printnbr(-n, count);
	}
	else if (n > 9)
	{
		ft_printnbr(n / 10, count);
		ft_printnbr(n % 10, count);
	}
	else
		ft_printchar(n + '0', count);
}
