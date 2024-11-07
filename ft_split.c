/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:40:33 by sedemir           #+#    #+#             */
/*   Updated: 2024/11/06 11:53:03 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	word_counter(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

int	word_lenght(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

void	ft_free(void *ptr)
{
	int		i;
	char	**s;

	i = 0;
	s = (char **)ptr;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		len;
	char	**result;

	if (!s)
		return (NULL);
	i = 0;
	result = (char **)malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = word_lenght(s, c);
			result[i] = (char *)malloc((len + 1) * sizeof(char));
			if (!result[i])
				return (ft_free(result), NULL);
			ft_strlcpy(result[i++], s, len + 1);
			s += len;
		}
		else
			s++;
	}
	return (result[i] = NULL, result);
}
