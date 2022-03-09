#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*temp;

	temp = lst
	i = 0;
	while (temp)
	{
		temp = temp -> next;
		i++;
	}
	return (i);
}
