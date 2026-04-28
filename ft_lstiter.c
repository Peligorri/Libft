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
