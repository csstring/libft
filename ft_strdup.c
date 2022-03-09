#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	len;
	int	i;
	char	*s2;

	i = 0;
	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (0);
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
