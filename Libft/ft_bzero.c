/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <kroyo-di@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:21:35 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/18 13:21:53 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, size_t n)
{
	int	i;

	while (i < n)
	{
		((char *) str)[i] = 0;
		i++;
	}
	return (str);
}
