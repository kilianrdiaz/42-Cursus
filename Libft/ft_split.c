/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:41:17 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/08 15:19:49 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_free(char *split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split);
		i++;
	}
	free(split);
}

void	ft_copy_word(char *word, char const *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[start] != '\0' && s[start] == c)
		start++;
	while (s[start + i] != c && s[start + i] != '\0')
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
}

char	*ft_get_words(char const *s, char c, int *pos)
{
	char	*word;
	int		start;

	start = *pos;
	word = NULL;
	while (s[*pos])
	{
		if (s[*pos] != c)
		{
			while (s[*pos] && s[*pos] != c)
				pos += 1;
			word = (char *)malloc(sizeof(char) * (*pos - start + 2));
			if (word == NULL)
				return (NULL);
			break ;
		}
		else
		{
			*pos += 1;
			start++;
		}
	}
	ft_copy_word(word, s, c, start);
}

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	nwords;

	i = 0;
	nwords = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nwords++;
			while (s[i] != c && s[i])
				i++;
			if (s[i] == '\0')
				return (nwords);
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		pos;
	int		nwords;
	char	**split;

	if (s == NULL)
		return (NULL);
	pos = 0;
	split = NULL;
	nwords = ft_countwords(s, c);
	split = (char **)malloc((nwords + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split[nwords] = NULL;
	i = 0;
	while (i < nwords)
	{
		split[i] = ft_get_words(s, c, &pos);
		if (split[i] == NULL)
		{
			ft_free(split[i]);
		}
		i++;
	}
	return (split);
}
