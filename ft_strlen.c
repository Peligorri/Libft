/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:34:31 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 13:34:33 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	num;
	size_t	i;

	num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		num++;
		i++;
	}
	return (num);
}
