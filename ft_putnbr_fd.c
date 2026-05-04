/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:54:44 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/27 18:15:46 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	inversenum[12];
	int		i;
	int		ncpy;

	i = 0;
	ncpy = n;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while (n > 0)
	{
		inversenum[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (ncpy < 0)
		inversenum[i++] = '-';
	while (i > 0)
		write(fd, &inversenum[--i], 1);
}
