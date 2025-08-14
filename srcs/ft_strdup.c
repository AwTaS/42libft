/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopauli <nopauli@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:23:21 by nopauli           #+#    #+#             */
/*   Updated: 2024/10/01 13:30:49 by nopauli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dynam;
	int		i;

	i = 0;
	dynam = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dynam)
	{
		while (str[i])
		{
			dynam[i] = (char)str[i];
			i++;
		}
		dynam[i] = '\0';
		return (dynam);
	}
	else
		return (0);
}
