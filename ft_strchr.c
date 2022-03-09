char	*ft_strchr(const char *s, int c)
{
	char	find;
	int	i;

	i = 0;
	find = (char)c;
	while (s[i] != find)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}
