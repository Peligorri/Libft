/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:17:28 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/28 11:47:25 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;
	char	*save_malloc;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	save_malloc = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!save_malloc)
		return (NULL);
	while (i < (len1 + len2))
	{
		if (i < len1)
		{
			save_malloc[i] = s1[i];
		}
		else
		{
			save_malloc[i] = s2[j];
			j++;
		}
		i++;
	}
	save_malloc[i] = '\0';
	return (save_malloc);
}
