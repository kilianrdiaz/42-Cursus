/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:05:00 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/30 20:57:28 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_printptr_hex(unsigned long long num, int *count)
{
	if (num >= 16)
	{
		ft_printptr_hex(num / 16, count);
		ft_printptr_hex(num % 16, count);
	}
	else
	{
		if (num <= 9)
			ft_printchar((num + '0'), count);
		else
			ft_printchar((num - 10 + 'a'), count);
	}
}

void	ft_printptr(void *p, int *count)
{
	ft_printstr("0x", count);
	if (p == NULL)
		ft_printchar('0', count);
	else
	{
		ft_printptr_hex((unsigned long long)p, count);
	}
}
