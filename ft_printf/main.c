#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int bytes;

	wchar_t *S = L"Привет ☕  ⚔  ⚒  ⚓  ⑨ ";


   // ft_printf(" 77 %%%% |%+5.1d| |%C| |%10.8s| OUI --> NON<--\n", data, C,  s);
   //     printf(" 77 %%%% |%+5.1d| |%C| |%10.8s| OUI --> NON:\n\n", data, C, s);

	// ft_printf("WORK %%%% |%-#25x| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
 //    printf("WORK %%%% |%-#25x| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

 //   ft_printf("%%%% |%-#35.6X| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
 //       printf("%%%% |%-#35.6X| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

	bytes = ft_printf(" ** |%3S|\n", S);

	printf("\n%d\n", bytes);
	printf("--------\n");
	bytes =    printf(" ** |%3ls|\n", S);

	printf("\n%d\n", bytes);
	return (0);
}
