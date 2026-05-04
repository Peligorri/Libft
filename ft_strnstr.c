/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:00:58 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/24 13:01:00 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	z;
	size_t	j;

	i = 0;
	z = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		if (big[i] == little[z])
		{
			j = i;
			while (big[j] == little[z] && little[z] != '\0' && j < len)
			{
				if (little[z + 1] == '\0')
				{
					return ((char *)&big[i]);
				}
				z++;
				j++;
			}
			z = 0;
		}
		i++;
	}
	return (NULL);
}
