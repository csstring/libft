/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:47:50 by schoe             #+#    #+#             */
/*   Updated: 2022/03/10 16:58:40 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char	*tem_dest;
	char	*tem_src;
	size_t	i;

	i = 0;
	tem_dest = (char *)dest;
	tem_src = (char *)src;
	if (n == 0 || tem_dest == tem_src)
		return (dest);
	while (i < n)
	{
		tem_dest[i] = tem_src[i];
		i++;
	}
	return (dest);
}
