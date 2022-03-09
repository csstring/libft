#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_size;
	size_t	i;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	while (i < size - 1 && i < src_size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_size);
}
