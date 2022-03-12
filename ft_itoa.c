/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:44:55 by schoe             #+#    #+#             */
/*   Updated: 2022/03/10 15:03:45 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(long long nb)
{
	int	size;

	if (nb < 0)
		nb *= -1;
	size = 0;
	while (nb > 0 || size == 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long long	nb;
	char		*arr;
	int			size;
	int			i;

	i = 0;
	nb = n;
	size = ft_size(nb);
	arr = (char *)malloc(sizeof(char) * (size + 2));
	if (arr == NULL)
		return (0);
	if (nb < 0)
	{
		i = 1;
		nb *= -1;
		arr[0] = '-';
	}
	arr[size + i] = '\0';
	while (size > 0)
	{
		arr[size + i - 1] = nb % 10 + '0';
		nb /= 10;
		size--;
	}
	return (arr);
}
