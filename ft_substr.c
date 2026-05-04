/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:45:46 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/28 11:46:43 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	poslen;

	if (!s)
		return (NULL);
	slen = 0;
	while (s[slen] != '\0')
		slen++;
	if (start > slen)
	{
		str = (char *)malloc(sizeof(*s));
		str[0] = '\0';
		return (str);
	}
	poslen = slen - start;
	if (poslen < len)
		len = poslen;
	str = (char *)malloc(sizeof(*s) * len + 1);
	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (s[i] != '\0' || j != len)
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
