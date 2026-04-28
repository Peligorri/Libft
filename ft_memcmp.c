/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:43:17 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/24 14:11:38 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1temp;
	const unsigned char	*s2temp;

	i = 0;
	s1temp = (const unsigned char *)s1;
	s2temp = (const unsigned char *)s2;
	while (i < n)
	{
		if (s1temp[i] != s2temp[i])
		{
			return (s1temp[i] - s2temp[i]);
		}
		i++;
	}
	return (0);
}
