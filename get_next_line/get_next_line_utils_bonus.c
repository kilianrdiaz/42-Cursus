/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:58:33 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/09/11 18:53:16 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	a;

	i = 0;
	a = c;
	while (str[i])
	{
		if (str[i] == a)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == a)
		return ((char *)&str[i]);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1_len;
	int		s2_len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1_len--)
	{
		str[i] = s1[i];
		i++;
	}
	s1_len = i;
	i = 0;
	while (s2_len--)
		str[s1_len++] = s2[i++];
	str[s1_len] = '\0';
	return (str);
}

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) str)[i] = 0;
		i++;
	}
	return ;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	else
	{
		ft_bzero(ptr, (nmemb * size));
		return (ptr);
	}
}
