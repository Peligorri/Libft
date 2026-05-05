/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 10:38:09 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 16:49:37 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnum(const char *str, int num, int i, int neg)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - 48) + (num * 10);
		i++;
	}
	if (neg == 1)
		num = num * -1;
	return (num);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	num = 0;
	neg = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	if (nptr[i] < '0' || nptr[i] > '9')
		return (0);
	num = ft_putnum(nptr, num, i, neg);
	return (num);
}
