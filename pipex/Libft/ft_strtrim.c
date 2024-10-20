/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:28:38 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/08 14:37:54 by kroyo-di         ###   ########.fr       */
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

	i = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (i < len && find(set, s1[i]))
		i++;
	while (find(set, s1[len - 1]) && (len - 1))
		len--;
	if (len < i)
		len = i;
	trimmed = (char *) malloc((len - i + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	j = 0;
	while (i < len)
		trimmed[j++] = s1[i++];
	trimmed[j] = '\0';
	return (trimmed);
}
