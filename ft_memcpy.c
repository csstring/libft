void	*memcpy(void *dest, const void *src, size_t n)
{
	char	*tem_dest;
	char	*tem_src;
	size_t	i;

	i = 0;
	tem_dset = dest;
	tem_src = src;
	if (n == 0 || tem_dest == tem_src)
		return (dest);
	while (i < n)
	{
		tem_dest[i] = tem_src[i];
		i++;
	}
	return (dset);
}
