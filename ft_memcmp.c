/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:30:03 by sedemir           #+#    #+#             */
/*   Updated: 2024/11/06 11:39:27 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				l;

	l = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (l < n)
	{
		if (p1[l] != p2[l])
			return (p1[l] - p2[l]);
		l++;
	}
	return (0);
}
