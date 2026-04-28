/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:17:28 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/27 18:24:38 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*save_malloc;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	*save_malloc = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!save_malloc)
		return (NULL);
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		if (i <= ft_strlen(s1))
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
	return (*save_malloc);
}
