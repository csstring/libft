/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:59:13 by schoe             #+#    #+#             */
/*   Updated: 2022/03/10 10:59:26 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	unsigned char	find;

	len = ft_strlen(s);
	find = (unsigned char)c;
	while (len > 0 && s[len] != find)
		len--;
	if (s[len] == find)
		return ((char *)(s + len));
	return (0);
}
