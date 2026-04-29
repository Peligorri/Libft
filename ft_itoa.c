/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:03:20 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/28 11:51:19 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*num;
	long	temp;
	int		digit_num;
	int		i;

	digit_num = 0;
	temp = n;
	if (temp <= 0)
		digit_num++;
	while (temp)
	{
		temp /= 10;
		digit_num++;
	}
	num = malloc(sizeof(char) * (digit_num + 1));
	if (!num)
		return (NULL);
	num[digit_num] = '\0';
	if (n == 0)
	{
		num[0] = '0';
		return (num);
	}
	temp = n;
	if (temp < 0)
	{
		num[0] = '-';
		temp = -temp;
	}
	i = digit_num - 1;
	while (temp > 0)
	{
		num[i] = (temp % 10) + '0';
		temp /= 10;
		i--;
	}
	return (num);
}