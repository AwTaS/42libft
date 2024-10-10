/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopauli <nopauli@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:22:46 by nopauli           #+#    #+#             */
/*   Updated: 2024/10/01 13:26:16 by nopauli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (n)
	{
		str[i] = (unsigned char) c;
		i++;
		n--;
	}
	return (s);
}
