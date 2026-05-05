/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:36:08 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 13:36:11 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_insideloop(const char *big, const char *little, size_t i,
	size_t len)
{
	size_t	j;

	j = 0;
	while (little[j] && (i + j) < len && big[i + j] == little[j])
	{
		j++;
	}
	if (little[j] == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			if (ft_insideloop(big, little, i, len))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
