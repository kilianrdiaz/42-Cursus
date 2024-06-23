/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:55:57 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/06/18 13:38:52 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	src_len;
	unsigned int	dst_len;
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
		src_len++;
	}
	while (dst[i] != '\0')
	{
		i++;
		dst_len++;
	}
	i = 0;
	while (i < src_len && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
