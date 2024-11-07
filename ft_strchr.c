/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:36:53 by sedemir           #+#    #+#             */
/*   Updated: 2024/11/06 11:42:55 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		l;

	l = 0;
	str = (char *)s;
	while (str[l])
	{
		if (str[l] == (char)c)
		{
			return (&str[l]);
		}
		l++;
	}
	if ((char)c == '\0')
	{
		return (&str[l]);
	}
	return (NULL);
}
