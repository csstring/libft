#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_next;

	while (*lst)
	{
		temp_next = (*lst) -> next;
		ft_lstdelone(*lst, del);
		*lst = temp_next;
	}
}
