#include "libft.h"

void ft_lstdelone(list_t *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
