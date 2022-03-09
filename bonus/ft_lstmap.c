#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp_lst;
	t_list	*new_lst;
	t_list	*node;

	temp_lst = lst;
	new_lst = NULL;
	while (temp_lst)
	{
		node = ft_lstnew(f(temp_lst -> content));
		if (node == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, node);
		temp_lst = temp_lst -> next;
	}
	return (new_lst);
}
