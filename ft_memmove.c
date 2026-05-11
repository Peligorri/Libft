/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:38:38 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 16:16:01 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copyarray(const unsigned char *src2, unsigned char *dest2,
	size_t n)
{
	size_t	i;

	i = 0;
	if (dest2 < src2)
	{
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			dest2[n] = src2[n];
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;

	if (!dest && !src)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	ft_copyarray(src2, dest2, n);
	return (dest);
}
