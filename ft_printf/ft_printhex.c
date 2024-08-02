/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:42:30 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/30 20:59:23 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_convert(unsigned int num, const char format, int *count)
{
	if (num >= 16)
	{
		ft_convert(num / 16, format, count);
		ft_convert(num % 16, format, count);
	}
	else
	{
		if (num <= 9)
			ft_printnbr(num, count);
		else
		{
			if (format == 'X')
				ft_printchar((num - 10 + 'A'), count);
			else if (format == 'x')
				ft_printchar((num - 10 + 'a'), count);
		}
	}
}

void	ft_printhex(unsigned int num, const char format, int *count)
{
	if (num == 0)
		ft_printnbr(0, count);
	else
		ft_convert(num, format, count);
}
