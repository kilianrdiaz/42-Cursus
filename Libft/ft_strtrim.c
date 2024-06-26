/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:28:38 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/26 19:53:40 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	find(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*trimmed;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	while (i < len && find(set, s1[i]))
		i++;
	while (find(set, s1[len]) && len >= i)
		len--;
	trimmed = (char *) malloc((i - len + 1) * sizeof(char));
	j = 0;
	while (i < (len + 1))
	{
		trimmed[j] = s1[i];
		i++;
		j++;
	}
	return (trimmed);
}
