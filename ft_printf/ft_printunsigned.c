/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:04:29 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/08/06 20:04:31 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printunsigned(unsigned int n, int *count)
{
	if (n == 0)
		ft_printnbr(0, count);
	else
	{
		if (n > 9)
		{
			ft_printunsigned(n / 10, count);
			ft_printunsigned(n % 10, count);
		}
		else if (n <= 9)
			ft_printnbr(n, count);
	}
}
