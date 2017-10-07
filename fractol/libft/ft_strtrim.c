#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char	*aux;
	int		i;
	int		j;
	int		k;

	if (s)
	{
		i =0;
		j = ft_strlen(s) -1;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			j--;
		if (!(aux = (char*)malloc(sizeof(*aux) * (j - i + 2))))
			return (NULL);
		k = 0;
		while (i <= j)
			aux[k++] = s[i++];
		aux[k] = '\0';
		return (aux);
	}
	return (NULL);
}