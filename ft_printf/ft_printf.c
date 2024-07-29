/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:57:23 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/29 19:40:10 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_type(va_list arg_list, const char format, int *count)
{
	if (format == '%')
		ft_printchar('%', count);
	else if (format == 'c')
		ft_printchar(va_arg(arg_list, int), count);
	else if (format == 'd')
		ft_printnbr(va_arg(arg_list, int), count);
	else if (format == 's')
		ft_printstr(va_arg(arg_list, char *), count);
	else if (format == 'p')
		ft_printstr(va_arg(arg_list, void *), count);
}

int	ft_printf(char const *format, ...)
{
	int		i;
	int		count;
	va_list	arg_list;

	i = 0;
	count = 0;
	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_get_type(arg_list, format[i + 1], &count);
			i = i + 2;
		}
		else
			ft_printchar(format[i++], &count);
	}
	va_end(arg_list);
	return (count);
}
