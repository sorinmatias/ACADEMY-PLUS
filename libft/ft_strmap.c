#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	char	*aux;
	int		i;

	i = 0;
	if(!(aux = (char*)malloc(sizeof(*aux) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		aux[i] = f((char)s[i]);
		i++;
	}
	aux[i] = '\0';
	return (aux);
}