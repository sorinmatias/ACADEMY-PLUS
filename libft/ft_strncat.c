#include <string.h>

char	*ft_strncat(char *d, const char *s, size_t n)
{
	size_t i;

	i = 0;
	while (*d)
		d++;
	while(s[i] && i < n)
		*d++ = s[i++];
	*d = '\0';
	return (d);
}