/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopauli <nopauli@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:25:30 by nopauli           #+#    #+#             */
/*   Updated: 2024/10/01 13:29:06 by nopauli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	char	occurence;
	int		i;

	occurence = (char)c;
	i = ft_strlen(str);
	s = (char *)str;
	while (i > 0)
	{
		if (s[i] == occurence)
			return (s + i);
		i--;
	}
	if (s[i] == occurence)
		return (s);
	return (0);
}
