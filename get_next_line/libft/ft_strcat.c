
char	*ft_strcat(char *d, const char *s)
{
	int i;

	i = 0;
	while (d[i])
		i++;
	while (*s)
		d[i++] = *s++;
	d[i] = '\0';
	return (d);
}