#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
{
	unsigned int i;
	char	*arr;
	int	size;

	i = 0;
	size = ft_strlen(s);
	arr = (char *)malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
		return (0);
	while (s[i])
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
