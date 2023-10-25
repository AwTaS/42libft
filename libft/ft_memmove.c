/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npauli <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 07:42:03 by npauli            #+#    #+#             */
/*   Updated: 2023/10/25 17:30:34 by npauli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dst;
	char	*temp_src;
	size_t	i;

	if (!dst && !src)
		return (0);
	temp_dst = (char *) dst;
	temp_src = (char *) src;
	i = 0;
	if (temp_dst > temp_src)
		while (len-- > 0)
			temp_dst[len] = temp_src[len];
	else
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (dst);
}
