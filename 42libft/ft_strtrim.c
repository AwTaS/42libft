/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopauli <nopauli@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:25:34 by nopauli           #+#    #+#             */
/*   Updated: 2024/10/01 13:29:06 by nopauli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (ft_isinset(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		s2 = ft_strdup("");
		if (!s2)
			return (0);
		else
			return (s2);
	}
	while (ft_isinset(s1[end - 1], set) == 0)
		end--;
	s2 = ft_substr(s1, start, end - start);
	return (s2);
}
