/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:38:10 by jangonza          #+#    #+#             */
/*   Updated: 2026/04/28 14:44:40 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*lstcpy;

	i = 0;
	if (!lst)
		return (0);
	*lstcpy = *lst;
	while (lstcpy)
	{
		lstcpy = lstcpy->next;
		i++;
	}
	return (i);
}
