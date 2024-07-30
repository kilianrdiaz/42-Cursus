/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:51:28 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/30 21:05:11 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char letra = 'Y';
	ft_printf("CARACTER:\nPersonal: %c \n", letra);
	printf("Original: %c \n\n", letra);

	ft_printf("DECIMAL:\nPersonal: %d \n", 25122001);
	printf("Original: %d \n\n", 25122001);

	ft_printf("STRING:\nPersonal: %s \n", "funciona correctamente");
	printf("Original: %s \n\n", "funciona correctamente");

	ft_printf("HEXADECIMAL:\nPersonal: %X - %x\n", 42, 255);
	printf("Original: %x - %X\n\n", 42, 255);

	ft_printf("Personal: %% \n");
	printf("Original: %% \n");
	return (0);
}
