/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npauli <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:47:53 by npauli            #+#    #+#             */
/*   Updated: 2023/10/25 17:36:53 by npauli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	ptr = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!ptr)
		return (0);
	i = 0;
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	return (ptr);
}
