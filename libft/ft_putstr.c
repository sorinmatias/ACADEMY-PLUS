#include <unistd.h>

void	ft_putstr(const char *str)
{
	while (*str)
		write(1, str++, 1);
}