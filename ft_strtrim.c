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

int	ft_isinset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s1lenset;
	size_t	setlen;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	s1lenset = 0;
	setlen = 0;
	while (set[setlen] != '\0')
		setlen++;
	while (s1[i] && ft_isinset(s1[i], set))
	{
		i++;
	}
	while (s1[s1lenset] != '\0')
		s1lenset++;
	while (ft_isinset(s1[s1lenset - 1], set))
	{
		s1lenset--;
		j++;
	}
	if (s1lenset == 0)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc((s1lenset - i) + 1);
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