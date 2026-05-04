/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:07:54 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/28 11:45:46 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i] != '\0')
	{
		i++;
	}
	str = malloc((sizeof(char) * i) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (!s || !f)
			return (NULL);
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
