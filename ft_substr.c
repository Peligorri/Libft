/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:09:48 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 14:09:50 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_empty(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	poslen;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start > slen)
		return (ft_empty());
	poslen = slen - start;
	if (poslen < len)
		len = poslen;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
