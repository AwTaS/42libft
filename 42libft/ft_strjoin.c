/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopauli <nopauli@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:24:53 by nopauli           #+#    #+#             */
/*   Updated: 2024/10/01 13:30:44 by nopauli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	s3 = malloc(total_len * sizeof(char));
	if (!s3)
		return (0);
	ft_memmove(s3, s1, s1_len);
	ft_memmove(s3 + s1_len, s2, s2_len);
	s3[total_len - 1] = '\0';
	return (s3);
}
