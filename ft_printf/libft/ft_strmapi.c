#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*aux;

	i = 0;
	if (!(aux = (char*)malloc(sizeof(*aux) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		aux[i] = f(i, s[i]);
		i++;
	}
	aux[i] = '\0';
	return (aux);
}