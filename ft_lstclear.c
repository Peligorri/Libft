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
