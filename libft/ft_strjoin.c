#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	aux = (char*)malloc(sizeof(*aux) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!aux)
		return (NULL);
	while (s1[i])
			aux[j++] = s1[i++];
	i = 0;
	while (s2[i])
		aux[j++] = s2[i++];
	aux[j] = '\0';
	return (aux);
}