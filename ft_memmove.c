/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:44:01 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/24 14:10:21 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest2;
	unsigned char		temp[10000];
	const unsigned char	*src2;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	while (i < n)
	{
		temp[i] = src2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest2[i] = temp[i];
		i++;
	}
	return (dest);
}
