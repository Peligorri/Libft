/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:07:54 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/27 16:32:25 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*str;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (!str)
		return (NULL);
	str = malloc((sizeof(char) *  i) + 1);
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
