/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jangonza <jangonza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:32:45 by jangonza          #+#    #+#             */
/*   Updated: 2026/05/05 11:32:47 by jangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstcpy;

	if (!lst)
		return (NULL);
	lstcpy = lst;
	while (lstcpy->next)
	{
		lstcpy = lstcpy->next;
	}
	return (lstcpy);
}
