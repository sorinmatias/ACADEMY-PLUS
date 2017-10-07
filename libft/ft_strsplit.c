#include<stdlib.h>
#include <string.h>

static int		ft_nr_w(char const *s, char c)
{
	int i;
	int cnt;
	int	part;

	i = 0;
	cnt = 0;
	part = 0;
	while (s[i])
	{
		if (s[i] == c && part == 1)
			part = 0;
		if (s[i] != c && part == 0)
		{
			part = 1;
			cnt++;
		}
		i++;
	}
	return (cnt);
}

static int		s_tw(const char *s, char c)
{
	int length;

	length = 0;
	while (*s)
	{
		if(*s == c)
			s++;
		else if ((*s && *s != c))
		{
			length++;
			s++;
		}
	}
	return (length);
}

static int		s_w(const char *s, char c)
{
	int length;

	length = 0;
	while((*s && *s != c))
	{
		length++;
		s++;		
	}
	return (length);
}

char	*ft_word(const char *s, char c,int len)
{
	int		i;
	char	*aux;

	i = 0;
	if((aux = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
				return (NULL);
	while (*s && (*s != c))
			{
				aux[i++] = *s++;
			}
	aux[i] = '\0';
	return (aux);
}

char    **ft_strsplit(const char *s, char c)
{
	char	**tab;
	int		i;

	if ((tab = (char**)malloc(sizeof(char*) * (s_tw(s, c) +1))) == NULL)
		return (NULL);
	i = 0;
	while (*s && ft_nr_w(s, c) > 0)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			tab[i++] = ft_word(s, c, s_w(s, c));
			while (*s != c && *s != '\0')
				s++;
		}
	}	
	if (*s == '\0' || ft_nr_w(s, c) == 0)
			tab[i] = '\0';
	return (tab);
}