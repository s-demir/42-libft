/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:57:12 by sedemir           #+#    #+#             */
/*   Updated: 2024/11/04 17:27:23 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*ptr;

	s_len = ft_strlen(s);
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	while (i < len && s[i + start])
		i++;
	ptr = (char *)malloc((sizeof(char) * i) + 1);
	if (!ptr)
		return (NULL);
	while (j < i)
	{
		ptr[j] = s[start + j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
