/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:27:13 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 11:27:17 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lstcpy;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		lstcpy = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lstcpy;
	}
}
