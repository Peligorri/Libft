/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:03:20 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/27 16:03:00 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char	*num;
	int		temp_num;
	int		digit_num;
	int		i;

	digit_num = 0;
	temp_num = n;
	if (temp_num < 0)
	{
		temp_num = temp_num * -1;
		digit_num++;
	}
	while (temp_num > 0)
	{
		temp_num = temp_num / 10;
		digit_num++;
	}
	num = malloc(sizeof(char) * (digit_num + 1));
	temp_num = n;
	if (n < 0)
	{
		num[0] = '-';
	}
	i = 1;
	if (temp_num < 0)
		temp_num = temp_num * -1;
	while (temp_num > 0)
	{
		num[digit_num - i] = (temp_num % 10) + '0';
		temp_num = temp_num / 10;
		i++;
	}
	num[digit_num] = '\0';
	return(*num);
}
