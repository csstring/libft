#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nb;
	char	temp;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= - 1;
	}
	if (nb > 9)
		ft_putnbr_fd(nb/10, fd);
	temp = nb % 10 + '0';
	write(1, &temp , 1);
}
