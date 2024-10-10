/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopauli <nopauli@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:22:25 by nopauli           #+#    #+#             */
/*   Updated: 2024/10/01 13:31:08 by nopauli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	int			i;

	if (!dest && !src)
		return (0);
	d = dest;
	s = src;
	i = 0;
	while (n)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
