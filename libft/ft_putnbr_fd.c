
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	v[10];
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
		write(fd, "0", 1);
	while (nb > 0)
	{
		v[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(fd, &v[i], 1);
		i--;
	}
}