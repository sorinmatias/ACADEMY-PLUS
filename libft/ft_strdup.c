#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*d;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	d = (char*)malloc(sizeof(char) * (i + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}