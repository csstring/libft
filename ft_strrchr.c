#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	char	find;

	len = ft_strlen(s);
	find = (char)c;
	while (len > 0 && s[len] != find)
		len--;
	if (s[len] == find)
		return ((char *)&s[len]);
	return (0);
}
