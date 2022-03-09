#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	d_o;

	d = 0;
	s = 0;
	d_o = 0;
	while (dest[d])
	{
		d++;
		d_o++;
	}
	while (src[s] && d_o + s + 1 < size)
		dest[d++]=src[s++];
	while (src[s])
		s++;
	dest[d] = '\0';
	if (d_o >= size)
		return (s + size);
	else
		return (d_o + s);
	return (0);
}
