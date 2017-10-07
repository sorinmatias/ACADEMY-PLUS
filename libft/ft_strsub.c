
#include <stdlib.h>
#include <string.h>

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*aux;

	i = 0;
	if (!(aux = (char*)malloc(sizeof(*aux) * (len + 1))))
		return (NULL);
	while (*s && (len > 0))
	{
		aux[i++] = s[start++];
		len--;
	}
	aux[i] = '\0';
	return (aux);
}