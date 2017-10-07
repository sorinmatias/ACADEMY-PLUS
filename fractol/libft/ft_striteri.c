void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (*(char*)(s + i))
	{
		f(i, &*(char*)(s + i));
		i++;
	}
}