/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopauli <nopauli@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:24:58 by nopauli           #+#    #+#             */
/*   Updated: 2024/10/01 13:30:40 by nopauli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	len_dest = i;
	len_src = ft_strlen(src);
	if (size <= len_dest || size == 0)
		return (len_src + size);
	size -= len_dest;
	while ((src[j] != '\0') && ((size_t)j < size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dest + len_src);
}
