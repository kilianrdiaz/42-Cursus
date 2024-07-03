/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:14:16 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/03 17:14:16 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return ;
}