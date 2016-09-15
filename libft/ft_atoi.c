
int		ft_atoi(const char *str)
{
	long	rez;
	int		rez2;
	int		sign;
	int		i;

	rez = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rez = rez * 10 + str[i] - '0';
		i++;
	}
	rez2 = rez  * sign;
	return (rez2);
}
