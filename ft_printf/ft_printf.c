/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:57:23 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/15 16:51:19 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_type(va_list arg_list, char type)
{
		if (type == 'c')
				ft_putchar_fd(va_arg(arg_list, int), 1);
		else if (type == 'd')
				ft_putnbr_fd(va_arg(arg_list, int), 1);
		else if (type == 's')
				ft_putstr_fd(va_arg(arg_list, char*), 1);
		else if

}

int	ft_printf(char const *format, ...)
{
	int		i;
	int		final_length;
	va_list	arg_list;

	i = 0;
	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_get_type(arg_list, format[i + 1]);
			i = i + 2;
		}
		else
			ft_putchar_fd(format[i++], 1);
	}
	va_end(arg_list);
	return (ft_strlen((char *)format));
}

int	main(void)
{
	ft_printf("Hola buenas %s, bienvenido!", "Kilian");
	return (0);	
}
