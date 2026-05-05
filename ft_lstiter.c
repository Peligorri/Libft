/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:31:41 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 11:31:43 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lstcpy;

	if (!lst || !f)
		return ;
	lstcpy = lst;
	while (lstcpy)
	{
		f(lstcpy->content);
		lstcpy = lstcpy->next;
	}
}
