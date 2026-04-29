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

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	words_num;

	i = 0;
	words_num = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			words_num++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words_num);
}

int	ft_countletters(char const *s, char c, int i)
{
	int	letters_num;

	letters_num = 0;
	while (s[i] && s[i] != c)
	{
		letters_num++;
		i++;
	}
	return (letters_num);
}

void	ft_copy_final_array(char const *s, char c, char **final_array)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			j = 0;
			while (s[i] && s[i] != c)
			{
				final_array[k][j] = s[i];
				i++;
				j++;
			}
			final_array[k][j] = '\0';
			k++;
		}
	}
	final_array[k] = NULL;
}
char	**ft_split(char const *s, char c)
{
	int		words_num;
	int		letter_num;
	int		i;
	int		k;
	char	**final_array;

	if (!s)
		return (NULL);
	words_num = ft_countwords(s, c);
	final_array = malloc(sizeof(char *) * (words_num + 1));
	if (!final_array)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			letter_num = ft_countletters(s, c, i);
			final_array[k] = malloc(sizeof(char) * (letter_num + 1));
			if (!final_array[k])
				return (NULL);
			k++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	ft_copy_final_array(s, c, final_array);
	return (final_array);
}