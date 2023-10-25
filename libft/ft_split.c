/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npauli <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:10:46 by npauli            #+#    #+#             */
/*   Updated: 2023/09/21 08:23:45 by npauli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && find_sep(str[i], charset))
				i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !find_sep(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !find_sep(str[i], charset))
		i++;
	return (i);
}

char	*word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = ft_strlen_sep(str, charset);
	word = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strings;

	i = 0;
	strings = malloc(sizeof(char *) * (count_strings(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && find_sep(*str, charset))
				str++;
		if (*str != '\0')
		{
			strings[i] = word(str, charset);
			i++;
		}
		while (*str != '\0' && !find_sep(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**split;
	(void)	argc;
	int		i;

	split = ft_split(argv[1], argv[2]);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}*/
