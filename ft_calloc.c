/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:07:31 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 11:07:35 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;
	size_t	x;

	x = nmemb * size;
	s = malloc(x);
	if (!s)
		return (NULL);
	ft_memset(s, 0, x);
	return ((void *)s);
}
