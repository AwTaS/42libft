/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npauli <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:47:38 by npauli            #+#    #+#             */
/*   Updated: 2023/10/25 17:32:04 by npauli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	if (c == -2147483648)
		write(fd, "-2147483648", 11);
	else if (c < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_fd(c *= -1, fd);
	}
	else if (c > 9)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
	else if (c <= 9 && c >= 0)
		ft_putchar_fd(c + 48, fd);
}
