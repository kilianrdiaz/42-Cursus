/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:57:23 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/08/12 19:48:52 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_type(va_list arg_list, const char format, int *count)
{
	if (format == 'c')
		ft_printchar(va_arg(arg_list, int), count);
	else if (format == 'd' || format == 'i')
		ft_printnbr(va_arg(arg_list, int), count);
	else if (format == 's')
		ft_printstr(va_arg(arg_list, char *), count);
	else if (format == 'x' || format == 'X')
		ft_printhex(va_arg(arg_list, unsigned int), format, count);
	else if (format == 'p')
		ft_printptr(va_arg(arg_list, void *), count);
	else if (format == 'u')
		ft_printunsigned(va_arg(arg_list, unsigned int), count);
	else if (format == '%')
		ft_printchar('%', count);
	else
		ft_printchar(format, count);
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
		if (format[i] == '%' && format[i + 1])
		{
			ft_get_type(arg_list, format[i + 1], &count);
			i = i + 2;
		}
		else if (format[i] != '%')
			ft_printchar(format[i++], &count);
		else
			i++;
	}
	va_end(arg_list);
	return (count);
}
