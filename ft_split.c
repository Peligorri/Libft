/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:59:24 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/28 11:50:19 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		words_num;
	int		i;
	int		j;
	int		k;
	char	**final_array;

	i = 0;
	words_num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			words_num++;
			while (s[i++] == c)
				i++;
		}
		i++;
	}
	final_array = (char **)malloc(sizeof(char *) *(words_num + 1));
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c)
		{
			i++;
		}
		final_array[k] = (char *)malloc(sizeof(char *) *(i + 1));
		k++;
	}
	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			final_array[k][j] = '\0';
			while (s[i++] == c)
				i++;
			k++;
		}
		final_array[k][j] = s[i];
		i++;
		j++;
	}
	final_array[k][0] = '\0';
	return (final_array);
}
