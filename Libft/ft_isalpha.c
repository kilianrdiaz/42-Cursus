/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:24:48 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/18 13:37:16 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (1);
	else if (n >= 'a' && n <= 'z')
		return (2);
	else
		return (0);
}
