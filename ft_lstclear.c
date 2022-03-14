/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:03:34 by schoe             #+#    #+#             */
/*   Updated: 2022/03/14 18:42:23 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_next;
	t_list	**first_lst;

	first_lst = lst;
	while (*lst)
	{
		temp_next = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = temp_next;
	}
	first_lst = (void *)0;
}
