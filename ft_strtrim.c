/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:26:26 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/28 11:48:30 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s1lenset;
	char	*str;

	i = 0;
	j = 0;
	s1lenset = 0;
	while (s1[i] == *set)
	{
		i++;
	}
	while (s1[s1lenset] != '\0')
		s1lenset++;
	while (s1[s1lenset] == *set)
	{
		s1lenset--;
		j++;
	}
	str = (char *)malloc((s1lenset - i - j) + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (i != s1lenset)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
