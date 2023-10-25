/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npauli <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 07:42:20 by npauli            #+#    #+#             */
/*   Updated: 2023/10/25 17:30:54 by npauli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *) b;
	while (len > 0)
	{
		*temp = (unsigned char) c;
		temp++;
		len--;
	}
	return (b);
}
