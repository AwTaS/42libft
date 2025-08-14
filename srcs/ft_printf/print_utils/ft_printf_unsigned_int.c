/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopauli <nopauli@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:11:38 by nopauli           #+#    #+#             */
/*   Updated: 2024/11/15 09:04:44 by nopauli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ulen(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int nbr)
{
	int		len;
	char	*result;

	len = ft_ulen(nbr);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (0);
	result[len] = '\0';
	while (nbr != 0)
	{
		result[len - 1] = nbr % 10 + 48;
		nbr /= 10;
		len--;
	}
	return (result);
}

int	ft_putu(unsigned int nbr)
{
	int		char_printed;
	char	*s;

	char_printed = 0;
	if (nbr == 0)
		char_printed += write(1, "0", 1);
	else
	{
		s = ft_uitoa(nbr);
		char_printed += ft_putstr(s);
		free(s);
	}
	return (char_printed);
}
