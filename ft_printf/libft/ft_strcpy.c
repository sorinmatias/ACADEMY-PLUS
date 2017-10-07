
char	*ft_strcpy(char *d, const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = s[i];
	return (d);
}