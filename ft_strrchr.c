/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:35:02 by sedemir           #+#    #+#             */
/*   Updated: 2024/11/06 13:21:13 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		l;

	l = 0;
	str = (char *)s;
	while (str[l])
		l++;
	while (l >= 0)
	{
		if (str[l] == (unsigned char)c)
		{
			return (&str[l]);
		}
		l--;
	}
	return (NULL);
}
