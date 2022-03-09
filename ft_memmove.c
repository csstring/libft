#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_src;
	unsigned char 	*temp_dest;
	unsigned char	*temp;
	size_t	i;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	temp = malloc(sizeof(char) * n);
	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		temp[i] = temp_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		temp_dest[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
