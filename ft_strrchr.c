/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:47:09 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/24 13:47:10 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	temp;

	i = 0;
	temp = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			temp = i;
		}
		i++;
	}
	if (temp >= 0)
	{
		return ((char *)&s[temp]);
	}
	else if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
