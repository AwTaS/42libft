/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopauli <nopauli@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:13:03 by nopauli           #+#    #+#             */
/*   Updated: 2024/11/15 08:42:55 by nopauli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_convhex(unsigned int num, const char format);
void	ft_convptr(uintptr_t nbr);
int		ft_len(int n);
int		hex_len(unsigned int num);
int		ptr_len(uintptr_t nbr);
int		ft_ulen(unsigned int nbr);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_puthex(unsigned int num, const char format);
int		ft_putptr(uintptr_t ptr);
int		ft_putu(unsigned int nbr);
int		ft_conversion(va_list vl, const char format);
int		ft_printf(const char *format, ...);
char	*ft_char(char *s, unsigned int num, int len);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int nbr);

#endif
