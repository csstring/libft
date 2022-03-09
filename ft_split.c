#include <stdlib.h>
int	ft_sep(char s, char c)
{
	if (s == c)
		return (1);
	else if (s == '\0')
		return (1);
	return (0);
}

int	word_count(char const *str, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (ft_sep(str[i], c) == 0 && ft_sep(str[i + 1], c) == 1)
			word++;
		i++;
	}
	return (word);
}

void	word_write(char *dest, char const *str, char c)
{
	int	i;

	i = 0;
	while (ft_sep(str[i], c) == 0)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

void	arr_write(char **split, char const *str, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (ft_sep(str[i], c))
			i++;
		else
		{
			j = 0;
			while (ft_sep(str[i + j], c) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			word_write(split[word], str + i, c);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		size;

	size = word_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	arr[size] = 0;
	arr_write(arr, s, c);
	return (arr);
}
