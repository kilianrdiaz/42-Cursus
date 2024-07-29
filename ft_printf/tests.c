/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:51:28 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/29 19:39:16 by kroyo-di         ###   ########.fr       */
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

	ft_printf("HEXADECIMAL:\n");
	printf("Original: %x\n\n", 255);

	ft_printf("Personal: %% \n");
	printf("Original: %% \n");
	return (0);
}
