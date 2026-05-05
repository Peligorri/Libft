/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:45:12 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 13:45:15 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, const char *set)
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

static size_t	ft_skip_left(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	return (i);
}

static size_t	ft_skip_right(char const *s1, char const *set, size_t len)
{
	while (len > 0 && ft_isinset(s1[len - 1], set))
		len--;
	return (len);
}

static char	*ft_copy_trim(char const *s1, size_t start, size_t end)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (end <= start)
		return (ft_strdup(""));
	str = malloc((end - start) + 1);
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (i < end)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = ft_skip_left(s1, set);
	len = ft_strlen((char *)s1);
	end = ft_skip_right(s1, set, len);
	return (ft_copy_trim(s1, start, end));
}
