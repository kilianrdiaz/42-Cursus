/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:39:57 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/08/08 13:58:07 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *s, int *count)
{
	if (!s)
		ft_printstr("(null)", count);
	else
	{
		write (1, s, ft_strlen(s));
		*count += ft_strlen(s);
	}
}
