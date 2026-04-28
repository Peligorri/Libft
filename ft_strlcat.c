/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:45:43 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/24 13:45:46 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[z] != '\0' && i < size - 1)
	{
		dst[i] = src[z];
		i++;
		z++;
	}
	dst[i] = '\0';
	while (src[z] != '\0')
	{
		z++;
	}
	i = i + z;
	z = size - i;
	return (i - z);
}
