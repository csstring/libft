#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	s;
	size_t	f;

	s = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	while (str[s] && s < len)
	{
		f = 0;
		while (str[s + f] == substr[f] && (s + f) < len)
		{
			if (substr[f + 1] == '\0')
				return ((char *)&str[s]);
			f++;
		}
		s++;
	}
	return (0);
}
