/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npauli <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:27:37 by npauli            #+#    #+#             */
/*   Updated: 2023/10/25 20:12:01 by npauli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr *= -1;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*pre_conv(int len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (0);
	tmp[0] = '0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	result = pre_conv(len);
	if (!result)
		return (0);
	i = len - 1;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + 48);
		nbr /= 10;
		i--;
	}
	return (result);
}
