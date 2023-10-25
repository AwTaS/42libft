/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npauli <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:53:16 by npauli            #+#    #+#             */
/*   Updated: 2023/10/25 17:25:35 by npauli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	minus;
	int	result;

	result = 0;
	minus = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (result * minus);
}
