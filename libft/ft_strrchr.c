#include <string.h>

char		*ft_strrchr( const char * s, int c)
{
	const char	*aux;

	aux = NULL;
	while (*s)
	{
		if ((char)*s == (char)c)
			aux = s;
		s++;
	}
	if ((char)*s == (char)c)
		return ((char*)s);
	return ((char*)aux);
}