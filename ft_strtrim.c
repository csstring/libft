#include "libft.h"
int	front(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

int	back(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	i--;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char	*temp;

	if (s1 == NULL)
		return (0);
	if (set == NULL)
		return (ft_strdup(s1));
	i = front(s1, set);
	j = back(s1, set);
	if (i <= j)
	{
		temp = (char *)malloc(sizeof(char) * (j - i + 2));
		ft_strlcpy(temp, &s1[i], j - i + 2);
		return (temp);
	}
	else
		return (0);
}