#include <string.h>

char		*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (s2[len])
		len++;
	if (len == 0)
		return ((char*)s1);
	while (s1[i])
	{
		while (s2[j] && s2[j] == s1[i + j])
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		j = 0;
		i++;
	}
	return (NULL);
}