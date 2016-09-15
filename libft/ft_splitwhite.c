
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int		strlen_tw(char *s)
{
	int length;

	length = 0;
	while (*s)
	{
		if(*s ==' ' || *s == '\t' || *s =='\n')
			s++;
		else if
			((*s && *s !=' ' && *s != '\t' && *s !='\n'))
		{
			length++;
			s++;
		}
	}
	return (length);
}

int		strlen_w(char *s)
{
	int length;

	length = 0;
	while((*s && *s !=' ' && *s != '\t' && *s !='\n'))
	{
		length++;
		s++;		
	}
	return (length);
}

char    **ft_splitwhite(char *s)
{
	char	**tab;
	int		i;
	int		j;
	
	if ((tab = (char**)malloc(sizeof(char*) * strlen_tw(s) +1)) == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s ==' ' || *s == '\t' || *s =='\n')
			s++;
		if (*s)
		{
			if((tab[i] = (char*)malloc(sizeof(char) * strlen_w(s) + 1)) == NULL)
				return (NULL);
			j = 0;
			while ((*s && *s !=' ' && *s != '\t' && *s !='\n'))
			{
				tab[i][j++] = *s;
				s++;
			}
			tab[i++][j] = '\0';
		}
		tab[i] = 0;
		s++;
	}
	return (tab);
}