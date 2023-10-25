/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npauli <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 07:41:46 by npauli            #+#    #+#             */
/*   Updated: 2023/10/25 17:30:17 by npauli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	while (n > 0)
	{
		*temp_dst = *temp_src;
		temp_dst++;
		temp_src++;
		n--;
	}
	return (dst);
}
