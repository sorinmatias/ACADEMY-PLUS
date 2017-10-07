/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf_lung.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 15:13:19 by vomnes            #+#    #+#             */
/*   Updated: 2017/03/16 06:46:25 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>
#include <stdio.h>

int			main(void)
{
	unsigned int data = 1255;
	long long int data2 = -325;
    int i = 0;
//	char char1 = '&';
	wchar_t C = L'\x2211';
//	wchar_t C = L'';
//	char *s = "Hello";
//	wchar_t *S = L"Привет ☕  ⚔  ⚒  ⚓  ⑨ ";

	setlocale(LC_CTYPE, "");
	ft_printf("%10.2d<--\n", 20);
	printf("%10.2d<--\n\n", 20);
	ft_printf("%10.2d<--\n", -20);
	printf("%10.2d<--\n\n", -20);

	ft_printf("%10d<--\n", -20);
	printf("%10d<--\n\n", -20);

	ft_printf("%4d<--\n", -20);
	printf("%4d<--\n\n", -20);
	ft_printf("%6d<--\n", -20);
	printf("%6d<--\n\n", -20);

	ft_printf("%10.25d<--\n", -20);
	printf("%10.25d<--\n\n", -20);
	ft_printf("%10.25d<--\n", -142);
	printf("%10.25d<--\n\n", -142);
	ft_printf("%10.25d<--\n", 20);
	printf("%10.25d<--\n\n", 20);
	ft_printf("%10.25d<--\n", 142);
	printf("%10.25d<--\n\n", 142);
	ft_printf("%10.25d<--\n", 0);
	printf("%10.25d<--\n\n", 0);

	ft_printf("%.25d<--\n", -20);
	printf("%.25d<--\n\n", -20);
	ft_printf("%.25d<--\n", 20);
	printf("%.25d<--\n\n", 20);
	ft_printf("%.25d<--\n", 0);
	printf("%.25d<--\n\n", 0);

	ft_printf("%10d<--\n", -20);
	printf("%10d<--\n\n", -20);
	ft_printf("%10d<--\n", -142);
	printf("%10d<--\n\n", -142);
	ft_printf("%10d<--\n", 20);
	printf("%10d<--\n\n", 20);
	ft_printf("%10d<--\n", 142);
	printf("%10d<--\n\n", 142);
	ft_printf("%10d<--\n", 0);
	printf("%10d<--\n\n", 0);

	ft_printf("-->000<--\n\n");

	ft_printf("-->Width<--\n\n");
	ft_printf("%010d<--\n", -20);
	printf("%010d<--\n\n", -20);
	ft_printf("%010d<--\n", -120);
	printf("%010d<--\n\n", -120);
	ft_printf("%010d<--\n", 20);
	printf("%010d<--\n\n", 20);
	ft_printf("%010d<--\n", 120);
	printf("%010d<--\n\n", 120);
	ft_printf("%010d<--\n", 0);
	printf("%010d<--\n\n", 0);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%0.10d<--\n", -20);
	printf("%0.10d<--\n\n", -20);
	ft_printf("%0.10d<--\n", -120);
	printf("%0.10d<--\n\n", -120);
	ft_printf("%0.10d<--\n", 20);
	printf("%0.10d<--\n\n", 20);
	ft_printf("%0.10d<--\n", 120);
	printf("%0.10d<--\n\n", 120);
	ft_printf("%0.10d<--\n", 0);
	printf("%0.10d<--\n\n", 0);

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%010.8d<--\n", -20);
	printf("%010.8d<--\n\n", -20);
	ft_printf("%010.8d<--\n", 20);
	printf("%010.8d<--\n\n", 20);
	ft_printf("%010.6d<--\n", -120);
	printf("%010.6d<--\n\n", -120);
	ft_printf("%010.2d<--\n", 20);
	printf("%010.2d<--\n\n", 20);
// After
	ft_printf("%10.8d<--\n", -20);
	printf("%10.8d<--\n\n", -20);
	ft_printf("%10.6d<--\n", -120);
	printf("%10.6d<--\n\n", -120);
	ft_printf("%10.2d<--\n", 20);
	printf("%10.2d<--\n\n", 20);
	ft_printf("%010.12d<--\n", -20);
	printf("%010.12d<--\n\n", -20);
	ft_printf("%010.12d<--\n", -120);
	printf("%010.12d<--\n\n", -120);
	ft_printf("%010.12d<--\n", 20);
	printf("%010.12d<--\n\n", 20);
	ft_printf("%010.10d<--\n", 120);
	printf("%010.10d<--\n\n", 120);
	ft_printf("%010.10d<--\n", 0);
	printf("%010.10d<--\n\n", 0);

	ft_printf("%10d<--\n", -20);
	printf("%10d<--\n\n", -20);

	ft_printf("%+10d<--\n", -20);
	printf("%+10d<--\n\n", -20);


	ft_printf("-->OK<--\n");
	ft_printf("%.10d<--\n", 20);
	printf("%.10d<--\n\n", 20);
	ft_printf("%.10d<--\n", 0);
	printf("%.10d<--\n\n", 0);
	ft_printf("%10d<--\n", -20);
	printf("%10d<--\n\n", -20);

	printf("-->---<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%-10.10d<--\n", 42);
	printf("%-10.10d<--\n\n", 42);
	ft_printf("%-10.8d<--\n", -42);
	printf("%-10.8d<--\n\n", -42);
	ft_printf("%-10.15d<--\n", 0);
	printf("%-10.15d<--\n\n", 0);
	ft_printf("%-10.8d<--\n", -20);
	printf("%-10.8d<--\n\n", -20);
	ft_printf("%-10.8d<--\n", 20);
	printf("%-10.8d<--\n\n", 20);
	ft_printf("%-10.6d<--\n", -120);
	printf("%-10.6d<--\n\n", -120);
	ft_printf("%-10.2d<--\n", 20);
	printf("%-10.2d<--\n\n", 20);
	ft_printf("%-10.12d<--\n", -20);
	printf("%-10.12d<--\n\n", -20);
	ft_printf("%-10.12d<--\n", -120);
	printf("%-10.12d<--\n\n", -120);
	ft_printf("%-10.12d<--\n", 20);
	printf("%-10.12d<--\n\n", 20);

	ft_printf("-->Width<--\n\n");
	ft_printf("%-10d<--\n", 42);
	printf("%-10d<--\n\n", 42);
	ft_printf("%-10d<--\n", 142);
	printf("%-10d<--\n\n", 142);
	ft_printf("%-10d<--\n", -42);
	printf("%-10d<--\n\n", -42);
	ft_printf("%-10d<--\n", -142);
	printf("%-10d<--\n\n", -142);
	ft_printf("%-10d<--\n", -20);
	printf("%-10d<--\n\n", -20);
	ft_printf("%-10d<--\n", 0);
	printf("%-10d<--\n\n", 0);
	ft_printf("%-6d<--\n", 42);
	printf("%-6d<--\n\n", 42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%-.8d<--\n", 42);
	printf("%-.8d<--\n\n", 42);
	ft_printf("%-.8d<--\n", 142);
	printf("%-.8d<--\n\n", 142);
	ft_printf("%-.8d<--\n", -42);
	printf("%-.8d<--\n\n", -42);
	ft_printf("%-.2d<--\n", -142);
	printf("%-.2d<--\n\n", -142);
	ft_printf("%-.8d<--\n", 0);
	printf("%-.8d<--\n\n", 0);

	printf("-->+++<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%+10.10d<--\n", 42);
	printf("%+10.10d<--\n\n", 42);
	ft_printf("%+10.8d<--\n", -42);
	printf("%+10.8d<--\n\n", -42);
	ft_printf("%+10.15d<--\n", 0);
	printf("%+10.15d<--\n\n", 0);
	ft_printf("%+10.8d<--\n", -20);
	printf("%+10.8d<--\n\n", -20);
	ft_printf("%+10.8d<--\n", 20);
	printf("%+10.8d<--\n\n", 20);
	ft_printf("%+10.6d<--\n", -120);
	printf("%+10.6d<--\n\n", -120);

	ft_printf("%+10.2d<--\n", 120);
	printf("%+10.2d<--\n\n", 120);

	ft_printf("%+10.2d<--\n", 20);
	printf("%+10.2d<--\n\n", 20);
	ft_printf("%+10.1d<--\n", 20);
	printf("%+10.1d<--\n\n", 20);
	ft_printf("%+10.0d<--\n", 20);
	printf("%+10.0d<--\n\n", 20);
	ft_printf("%+10.2d<--\n", -20);
	printf("%+10.2d<--\n\n", -20);
	ft_printf("%+10.1d<--\n", -20);
	printf("%+10.1d<--\n\n", -20);
	ft_printf("%+10.0d<--\n", -20);
	printf("%+10.0d<--\n\n", -20);

	ft_printf("%+10.12d<--\n", -20);
	printf("%+10.12d<--\n\n", -20);
	ft_printf("%+10.12d<--\n", -120);
	printf("%+10.12d<--\n\n", -120);
	ft_printf("%+10.12d<--\n", 20);
	printf("%+10.12d<--\n\n", 20);

	ft_printf("-->Width<--\n\n");
	ft_printf("%+10d<--\n", 42);
	printf("%+10d<--\n\n", 42);
	ft_printf("%+10d<--\n", 142);
	printf("%+10d<--\n\n", 142);
	ft_printf("%+10d<--\n", -42);
	printf("%+10d<--\n\n", -42);
	ft_printf("%+10d<--\n", -142);
	printf("%+10d<--\n\n", -142);
	ft_printf("%+10d<--\n", -20);
	printf("%+10d<--\n\n", -20);
	ft_printf("%+10d<--\n", 0);
	printf("%+10d<--\n\n", 0);
	ft_printf("%+1d<--\n", 42);
	printf("%+1d<--\n\n", 42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%+.8d<--\n", 42);
	printf("%+.8d<--\n\n", 42);
	ft_printf("%+.8d<--\n", 142);
	printf("%+.8d<--\n\n", 142);
	ft_printf("%+.8d<--\n", -42);
	printf("%+.8d<--\n\n", -42);
	ft_printf("%+.2d<--\n", -142);
	printf("%+.2d<--\n\n", -142);
	ft_printf("%+.8d<--\n", 0);
	printf("%+.8d<--\n\n", 0);

	printf("-->###<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%#10.10x<--\n", 42);
	printf("%#10.10x<--\n\n", 42);
	ft_printf("%#10.8x<--\n", 42);
	printf("%#10.8x<--\n\n", 42);
	ft_printf("%#10.15x<--\n", 0);
	printf("%#10.15x<--\n\n", 0);
	ft_printf("%#10.8x<--\n", 20);
	printf("%#10.8x<--\n\n", 20);
	ft_printf("%#10.8x<--\n", 20);
	printf("%#10.8x<--\n\n", 20);
	ft_printf("%#10.6x<--\n", 120);
	printf("%#10.6x<--\n\n", 120);
	ft_printf("%#10.2x<--\n", 20);
	printf("%#10.2x<--\n\n", 20);
	ft_printf("%#10.2x<--\n", 0);
	printf("%#10.2x<--\n\n", 0);
	ft_printf("%#10.12x<--\n", 20);
	printf("%#10.12x<--\n\n", 20);
	ft_printf("%#10.12x<--\n", 120);
	printf("%#10.12x<--\n\n", 120);
	ft_printf("%#10.12x<--\n", 20);
	printf("%#10.12x<--\n\n", 20);
	ft_printf("%#10.12X<--\n", 0);
	printf("%#10.12X<--\n\n", 0);

	ft_printf("-->Width<--\n\n");
	ft_printf("%#10x<--\n", 42);
	printf("%#10x<--\n\n", 42);
	ft_printf("%#10x<--\n", 142);
	printf("%#10x<--\n\n", 142);
	ft_printf("%#10x<--\n", 42);
	printf("%#10x<--\n\n", 42);
	ft_printf("%#10x<--\n", 142);
	printf("%#10x<--\n\n", 142);
	ft_printf("%#10x<--\n", 20);
	printf("%#10x<--\n\n", 20);
	ft_printf("%#10x<--\n", 0);
	printf("%#10x<--\n\n", 0);
	ft_printf("%#1x<--\n", 42);
	printf("%#1x<--\n\n", 42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%#.8x<--\n", 42);
	printf("%#.8x<--\n\n", 42);
	ft_printf("%#.8x<--\n", 142);
	printf("%#.8x<--\n\n", 142);
	ft_printf("%#.8x<--\n", 42);
	printf("%#.8x<--\n\n", 42);
	ft_printf("%#.2x<--\n", 142);
	printf("%#.2x<--\n\n", 142);
	ft_printf("%#.8x<--\n", 0);
	printf("%#.8x<--\n\n", 0);

	printf("-->   <--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("% 10.10d<--\n", 42);
	printf("% 10.10d<--\n\n", 42);

	ft_printf("% 10.8d<--\n", 42);
	printf("% 10.8d<--\n\n", 42);

	ft_printf("% 10.15d<--\n", 0);
	printf("% 10.15d<--\n\n", 0);

	ft_printf("% 10.8d<--\n", 20);
	printf("% 10.8d<--\n\n", 20);

	ft_printf("% 10.8d<--\n", 20);
	printf("% 10.8d<--\n\n", 20);

	ft_printf("% 10.6d<--\n", 120);
	printf("% 10.6d<--\n\n", 120);

	ft_printf("% 10.2d<--\n", 20);
	printf("% 10.2d<--\n\n", 20);

	ft_printf("% 10.2d<--\n", 0);
	printf("% 10.2d<--\n\n", 0);

	ft_printf("% 10.12d<--\n", 20);
	printf("% 10.12d<--\n\n", 20);

	ft_printf("% 10.12d<--\n", 120);
	printf("% 10.12d<--\n\n", 120);

	ft_printf("% 10.12d<--\n", 20);
	printf("% 10.12d<--\n\n", 20);

	ft_printf("% 10.12d<--\n", 0);
	printf("% 10.12d<--\n\n", 0);

	ft_printf("CHECK\n");
	ft_printf("% 10.10d<--\n", -42);
	printf("% 10.10d<--\n\n", -42);

	ft_printf("% 10.8d<--\n", -42);
	printf("% 10.8d<--\n\n", -42);

	ft_printf("% 10.15d<--\n", -40);
	printf("% 10.15d<--\n\n", -40);

	ft_printf("% 10.8d<--\n", -20);
	printf("% 10.8d<--\n\n", -20);

	ft_printf("% 10.7d<--\n", -20);
	printf("% 10.7d<--\n\n", -20);

	ft_printf("% 10.6d<--\n", -120);
	printf("% 10.6d<--\n\n", -120);

	ft_printf("% 10.4d<--\n", -20); // Check It :)
	printf("% 10.4d<--\n\n", -20);

	ft_printf("% 10.3d<--\n", -20); // Check It :)
	printf("% 10.3d<--\n\n", -20);

	ft_printf("%10.2d<--\n", 20);
	printf("%10.2d<--\n\n", 20);

	ft_printf("%10.3d<--\n", 20);
	printf("%10.3d<--\n\n", 20);

	ft_printf("%10.1d<--\n", 20);
	printf("%10.1d<--\n\n", 20);
	ft_printf("%10.1d<--\n", -20);
	printf("%10.1d<--\n\n", -20);
	ft_printf("%10.1d<--\n", -420);
	printf("%10.1d<--\n\n", -420);
	ft_printf("%10.0d<--\n", 20);
	printf("%10.0d<--\n\n", 20);

	ft_printf("% 10.2d<--\n", -40);
	printf("% 10.2d<--\n\n", -40);
	ft_printf("% 10.12d<--\n", -20);
	printf("% 10.12d<--\n\n", -20);
	ft_printf("% 10.12d<--\n", -120);
	printf("% 10.12d<--\n\n", -120);
	ft_printf("% 10.12d<--\n", -20);
	printf("% 10.12d<--\n\n", -20);
	ft_printf("% 10.12d<--\n", -50);
	printf("% 10.12d<--\n\n", -50);

	ft_printf("-->Width<--\n\n");
	ft_printf("% 10d<--\n", 42);
	printf("% 10d<--\n\n", 42);
	ft_printf("% 10d<--\n", 142);
	printf("% 10d<--\n\n", 142);
	ft_printf("% 10d<--\n", 42);
	printf("% 10d<--\n\n", 42);
	ft_printf("% 10d<--\n", 142);
	printf("% 10d<--\n\n", 142);
	ft_printf("% 10d<--\n", 20);
	printf("% 10d<--\n\n", 20);
	ft_printf("% 10d<--\n", 0);
	printf("% 10d<--\n\n", 0);
	ft_printf("% 1d<--\n", 42);
	printf("% 1d<--\n\n", 42);

	ft_printf("% 10d<--\n", -42);
	printf("% 10d<--\n\n", -42);
	ft_printf("% 10d<--\n", -142);
	printf("% 10d<--\n\n", -142);
	ft_printf("% 10d<--\n", -42);
	printf("% 10d<--\n\n", -42);
	ft_printf("% 10d<--\n", -142);
	printf("% 10d<--\n\n", -142);
	ft_printf("% 10d<--\n", -20);
	printf("% 10d<--\n\n", -20);
	ft_printf("% 10d<--\n", -50);
	printf("% 10d<--\n\n", -50);
	ft_printf("% 1d<--\n", -42);
	printf("% 1d<--\n\n", -42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("% .8d<--\n", 42);
	printf("% .8d<--\n\n", 42);
	ft_printf("% .8d<--\n", 142);
	printf("% .8d<--\n\n", 142);
	ft_printf("% .8d<--\n", 42);
	printf("% .8d<--\n\n", 42);
	ft_printf("% .2d<--\n", 142);
	printf("% .2d<--\n\n", 142);
	ft_printf("% .8d<--\n", 0);
	printf("% .8d<--\n\n", 0);

	ft_printf("% .8d<--\n", -42);
	printf("% .8d<--\n\n", -42);
	ft_printf("% .8d<--\n", -142);
	printf("% .8d<--\n\n", -142);
	ft_printf("% .8d<--\n", -42);
	printf("% .8d<--\n\n", -42);
	ft_printf("% .2d<--\n", -142);
	printf("% .2d<--\n\n", -142);
	ft_printf("% .8d<--\n", -8);
	printf("% .8d<--\n\n", -8);

	ft_printf("%#10.20X<--\n", 42);
	printf("%#10.20X<--\n\n", 42);
	ft_printf("%p<--\n", &i);
	printf("%p<--\n\n", &i);

	ft_printf("%#010.20X<--\n", 42);
	printf("%#010.20X<--\n\n", 42);
	ft_printf("%#-10.20X<--\n", 42);
	printf("%#-10.20X<--\n\n", 42);

	ft_printf("-->  ++ ++  <--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%- 10.10d<--\n", 42);
	printf("%- 10.10d<--\n\n", 42);
	ft_printf("%- 10.8d<--\n", 42);
	printf("%- 10.8d<--\n\n", 42);
	ft_printf("%- 10.15d<--\n", 0);
	printf("%- 10.15d<--\n\n", 0);
	ft_printf("%- 10.8d<--\n", 20);
	printf("%- 10.8d<--\n\n", 20);
	ft_printf("%- 10.8d<--\n", 20);
	printf("%- 10.8d<--\n\n", 20);
	ft_printf("%- 10.6d<--\n", 120);
	printf("%- 10.6d<--\n\n", 120);
	ft_printf("%- 10.2d<--\n", 20);
	printf("%- 10.2d<--\n\n", 20);
	ft_printf("%- 10.2d<--\n", 0);
	printf("%- 10.2d<--\n\n", 0);
	ft_printf("%- 10.12d<--\n", 20);
	printf("%- 10.12d<--\n\n", 20);
	ft_printf("%- 10.12d<--\n", 120);
	printf("%- 10.12d<--\n\n", 120);
	ft_printf("%- 10.12d<--\n", 20);
	printf("%- 10.12d<--\n\n", 20);
	ft_printf("%- 10.12d<--\n", 0);
	printf("%- 10.12d<--\n\n", 0);

	ft_printf("CHECK\n");
	ft_printf("%- 10.10d<--\n", -42);
	printf("%- 10.10d<--\n\n", -42);

	ft_printf("%- 10.8d<--\n", -42);
	printf("%- 10.8d<--\n\n", -42);
	ft_printf("%- 10.15d<--\n", -40);
	printf("%- 10.15d<--\n\n", -40);
	ft_printf("%- 10.8d<--\n", -20);
	printf("%- 10.8d<--\n\n", -20);
	ft_printf("%- 10.7d<--\n", -20);
	printf("%- 10.7d<--\n\n", -20);
	ft_printf("%- 10.6d<--\n", -120);
	printf("%- 10.6d<--\n\n", -120);
	ft_printf("%- 10.4d<--\n", -20); // Check It :)
	printf("%- 10.4d<--\n\n", -20);
	ft_printf("%- 10.3d<--\n", -20); // Check It :)
	printf("%- 10.3d<--\n\n", -20);

	ft_printf("%- 10.2d<--\n", -40);
	printf("%- 10.2d<--\n\n", -40);
	ft_printf("%- 10.12d<--\n", -20);
	printf("%- 10.12d<--\n\n", -20);
	ft_printf("%- 10.12d<--\n", -120);
	printf("%- 10.12d<--\n\n", -120);
	ft_printf("%- 10.12d<--\n", -20);
	printf("%- 10.12d<--\n\n", -20);
	ft_printf("%- 10.12d<--\n", -50);
	printf("%- 10.12d<--\n\n", -50);

	ft_printf("-->Width<--\n\n");
	ft_printf("%- 10d<--\n", 42);
	printf("%- 10d<--\n\n", 42);
	ft_printf("%- 10d<--\n", 142);
	printf("%- 10d<--\n\n", 142);
	ft_printf("%- 10d<--\n", 42);
	printf("%- 10d<--\n\n", 42);
	ft_printf("%- 10d<--\n", 142);
	printf("%- 10d<--\n\n", 142);
	ft_printf("%- 10d<--\n", 20);
	printf("%- 10d<--\n\n", 20);
	ft_printf("%- 10d<--\n", 0);
	printf("%- 10d<--\n\n", 0);
	ft_printf("%- 1d<--\n", 42);
	printf("%- 1d<--\n\n", 42);

	ft_printf("%- 10d<--\n", -42);
	printf("%- 10d<--\n\n", -42);
	ft_printf("%- 10d<--\n", -142);
	printf("%- 10d<--\n\n", -142);
	ft_printf("%- 10d<--\n", -42);
	printf("%- 10d<--\n\n", -42);
	ft_printf("%- 10d<--\n", -142);
	printf("%- 10d<--\n\n", -142);
	ft_printf("%- 10d<--\n", -20);
	printf("%- 10d<--\n\n", -20);
	ft_printf("%- 10d<--\n", -50);
	printf("%- 10d<--\n\n", -50);
	ft_printf("%- 1d<--\n", -42);
	printf("%- 1d<--\n\n", -42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%- .8d<--\n", 42);
	printf("%- .8d<--\n\n", 42);
	ft_printf("%- .8d<--\n", 142);
	printf("%- .8d<--\n\n", 142);
	ft_printf("%- .8d<--\n", 42);
	printf("%- .8d<--\n\n", 42);
	ft_printf("%- .2d<--\n", 142);
	printf("%- .2d<--\n\n", 142);
	ft_printf("%- .8d<--\n", 0);
	printf("%- .8d<--\n\n", 0);

	ft_printf("%- .8d<--\n", -42);
	printf("%- .8d<--\n\n", -42);
	ft_printf("%- .8d<--\n", -142);
	printf("%- .8d<--\n\n", -142);
	ft_printf("%- .8d<--\n", -42);
	printf("%- .8d<--\n\n", -42);
	ft_printf("%- .2d<--\n", -142);
	printf("%- .2d<--\n\n", -142);
	ft_printf("%- .8d<--\n", -8);
	printf("%- .8d<--\n\n", -8);

	ft_printf("-->--++-++--<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%-+10.10d<--\n", 42);
	printf("%-+10.10d<--\n\n", 42);
	ft_printf("%-+10.8d<--\n", 42);
	printf("%-+10.8d<--\n\n", 42);
	ft_printf("%-+10.15d<--\n", 0);
	printf("%-+10.15d<--\n\n", 0);
	ft_printf("%-+10.8d<--\n", 20);
	printf("%-+10.8d<--\n\n", 20);
	ft_printf("%-+10.8d<--\n", 20);
	printf("%-+10.8d<--\n\n", 20);
	ft_printf("%-+10.6d<--\n", 120);
	printf("%-+10.6d<--\n\n", 120);
	ft_printf("%-+10.2d<--\n", 20);
	printf("%-+10.2d<--\n\n", 20);
	ft_printf("%-+10.2d<--\n", 0);
	printf("%-+10.2d<--\n\n", 0);
	ft_printf("%-+10.12d<--\n", 20);
	printf("%-+10.12d<--\n\n", 20);
	ft_printf("%-+10.12d<--\n", 120);
	printf("%-+10.12d<--\n\n", 120);
	ft_printf("%-+10.12d<--\n", 20);
	printf("%-+10.12d<--\n\n", 20);
	ft_printf("%-+10.12d<--\n", 0);
	printf("%-+10.12d<--\n\n", 0);

	ft_printf("CHECK\n");
	ft_printf("%-+10.10d<--\n", -42);
	printf("%-+10.10d<--\n\n", -42);

	ft_printf("%-+10.8d<--\n", -42);
	printf("%-+10.8d<--\n\n", -42);
	ft_printf("%-+10.15d<--\n", -40);
	printf("%-+10.15d<--\n\n", -40);

	ft_printf("%-+10.8d<--\n", -20);
	printf("%-+10.8d<--\n\n", -20);
	ft_printf("%-+10.7d<--\n", -20);
	printf("%-+10.7d<--\n\n", -20);
	ft_printf("%-+10.6d<--\n", -120);
	printf("%-+10.6d<--\n\n", -120);
	ft_printf("%-+10.4d<--\n", -20); // Check It :)
	printf("%-+10.4d<--\n\n", -20);
	ft_printf("a\n");
	ft_printf("%-+10.8d<--\n", 20);
	printf("%-+10.8d<--\n\n", 20);
	ft_printf("%-+10.7d<--\n", 20);
	printf("%-+10.7d<--\n\n", 20);
	ft_printf("%-+10.6d<--\n", 120);
	printf("%-+10.6d<--\n\n", 120);
	ft_printf("%-+10.4d<--\n", 20); // Check It :)
	printf("%-+10.4d<--\n\n", 20);
	ft_printf("|||||%-+10.3d<--\n", -20); // BIG CHECK
	printf("|||||%-+10.3d<--\n\n", -20);
	ft_printf("|||||%-+10.2d<--\n", -20); // BIG CHECK
	printf("|||||%-+10.2d<--\n\n", -20);
	ft_printf("|||||%-+10.1d<--\n", -20); // BIG CHECK
	printf("|||||%-+10.1d<--\n\n", -20);
	ft_printf("|||||%-+10.0d<--\n", -20); // BIG CHECK
	printf("|||||%-+10.0d<--\n\n", -20);
	ft_printf("|||||%-+10.0d<--\n", -450); // BIG CHECK
	printf("|||||%-+10.0d<--\n\n", -450);

	ft_printf("%-+10.2d<--\n", -40);
	printf("%-+10.2d<--\n\n", -40);
	ft_printf("%-+10.12d<--\n", -20);
	printf("%-+10.12d<--\n\n", -20);
	ft_printf("%-+10.12d<--\n", -120);
	printf("%-+10.12d<--\n\n", -120);
	ft_printf("%-+10.12d<--\n", -20);
	printf("%-+10.12d<--\n\n", -20);
	ft_printf("%-+10.12d<--\n", -50);
	printf("%-+10.12d<--\n\n", -50);

	ft_printf("-->Width<--\n\n");
	ft_printf("%-+10d<--\n", 42);
	printf("%-+10d<--\n\n", 42);
	ft_printf("%-+10d<--\n", 142);
	printf("%-+10d<--\n\n", 142);
	ft_printf("%-+10d<--\n", 42);
	printf("%-+10d<--\n\n", 42);
	ft_printf("%-+10d<--\n", 142);
	printf("%-+10d<--\n\n", 142);
	ft_printf("%-+10d<--\n", 20);
	printf("%-+10d<--\n\n", 20);
	ft_printf("%-+10d<--\n", 0);
	printf("%-+10d<--\n\n", 0);
	ft_printf("%-+1d<--\n", 42);
	printf("%-+1d<--\n\n", 42);

	ft_printf("%-+10d<--\n", -42);
	printf("%-+10d<--\n\n", -42);
	ft_printf("%-+8d<--\n", -42);
	printf("%-+8d<--\n\n", -42);
	ft_printf("%-+10d<--\n", -142);
	printf("%-+10d<--\n\n", -142);
	ft_printf("%-+10d<--\n", -42);
	printf("%-+10d<--\n\n", -42);
	ft_printf("%-+10d<--\n", -142);
	printf("%-+10d<--\n\n", -142);
	ft_printf("%-+10d<--\n", -20);
	printf("%-+10d<--\n\n", -20);
	ft_printf("%-+10d<--\n", -50);
	printf("%-+10d<--\n\n", -50);
	ft_printf("%-+1d<--\n", -42);
	printf("%-+1d<--\n\n", -42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%-+.8d<--\n", 42);
	printf("%-+.8d<--\n\n", 42);
	ft_printf("%-+.8d<--\n", 142);
	printf("%-+.8d<--\n\n", 142);
	ft_printf("%-+.8d<--\n", 42);
	printf("%-+.8d<--\n\n", 42);
	ft_printf("%-+.2d<--\n", 142);
	printf("%-+.2d<--\n\n", 142);
	ft_printf("%-+.8d<--\n", 0);
	printf("%-+.8d<--\n\n", 0);

	ft_printf("%-+.8d<--\n", -42);
	printf("%-+.8d<--\n\n", -42);
	ft_printf("%-+.8d<--\n", -142);
	printf("%-+.8d<--\n\n", -142);
	ft_printf("%-+.8d<--\n", -42);
	printf("%-+.8d<--\n\n", -42);
	ft_printf("%-+.2d<--\n", -142);
	printf("%-+.2d<--\n\n", -142);
	ft_printf("%-+.8d<--\n", -8);
	printf("%-+.8d<--\n\n", -8);
//-----------------------------------------//
	ft_printf("-->00++0++00<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%0+10.10d<--\n", 42);
	printf("%0+10.10d<--\n\n", 42);
	ft_printf("%0+10.8d<--\n", 42);
	printf("%0+10.8d<--\n\n", 42);
	ft_printf("%0+10.15d<--\n", 0);
	printf("%0+10.15d<--\n\n", 0);
	ft_printf("%0+10.8d<--\n", 20);
	printf("%0+10.8d<--\n\n", 20);
	ft_printf("%0+10.8d<--\n", 20);
	printf("%0+10.8d<--\n\n", 20);
	ft_printf("%0+10.6d<--\n", 120);
	printf("%0+10.6d<--\n\n", 120);
	ft_printf("%0+10.2d<--\n", 20);
	printf("%0+10.2d<--\n\n", 20);
	ft_printf("%0+10.2d<--\n", 0);
	printf("%0+10.2d<--\n\n", 0);
	ft_printf("%0+10.12d<--\n", 20);
	printf("%0+10.12d<--\n\n", 20);
	ft_printf("%0+10.12d<--\n", 120);
	printf("%0+10.12d<--\n\n", 120);
	ft_printf("%0+10.12d<--\n", 20);
	printf("%0+10.12d<--\n\n", 20);
	ft_printf("%0+10.12d<--\n", 0);
	printf("%0+10.12d<--\n\n", 0);

	ft_printf("CHECK\n");
	ft_printf("%0+10.10d<--\n", -42);
	printf("%0+10.10d<--\n\n", -42);

	ft_printf("%0+10.8d<--\n", -42);
	printf("%0+10.8d<--\n\n", -42);
	ft_printf("%0+10.15d<--\n", -40);
	printf("%0+10.15d<--\n\n", -40);
	ft_printf("%0+10.8d<--\n", -20);
	printf("%0+10.8d<--\n\n", -20);
	ft_printf("%0+10.7d<--\n", -20);
	printf("%0+10.7d<--\n\n", -20);
	ft_printf("%0+10.6d<--\n", -120);
	printf("%0+10.6d<--\n\n", -120);
	ft_printf("%0+10.4d<--\n", -20); // Check It :)
	printf("%0+10.4d<--\n\n", -20);
	ft_printf("%0+10.3d<--\n", -20); // Check It :)
	printf("%0+10.3d<--\n\n", -20);
	ft_printf("%0+10.0d<--\n", -20); // Check It :)
	printf("%0+10.0d<--\n\n", -20);
	ft_printf("%0+10.0d<--\n", -450); // Check It :)
	printf("%0+10.0d<--\n\n", -450);

	ft_printf("|||||%0+10.3d<--\n", -20); // Check It :)
	printf("|||||%0+10.3d<--\n\n", -20);
	ft_printf("|||||%0+10.2d<--\n", -20); // Check It :)
	printf("|||||%0+10.2d<--\n\n", -20);
	ft_printf("|||||%0+10.1d<--\n", -20); // Check It :)
	printf("|||||%0+10.1d<--\n\n", -20);
	ft_printf("|||||%0+10.0d<--\n", -20); // Check It :)
	printf("|||||%0+10.0d<--\n\n", -20);
	ft_printf("|||||%0+10.0d<--\n", -450); // Check It :)
	printf("|||||%0+10.0d<--\n\n", -450);

	ft_printf("%0+10.2d<--\n", -40);
	printf("%0+10.2d<--\n\n", -40);
	ft_printf("%0+10.12d<--\n", -20);
	printf("%0+10.12d<--\n\n", -20);
	ft_printf("%0+10.12d<--\n", -120);
	printf("%0+10.12d<--\n\n", -120);
	ft_printf("%0+10.12d<--\n", -20);
	printf("%0+10.12d<--\n\n", -20);
	ft_printf("%0+10.12d<--\n", -50);
	printf("%0+10.12d<--\n\n", -50);

	ft_printf("-->Width<--\n\n");
	ft_printf("%0+10d<--\n", 42);
	printf("%0+10d<--\n\n", 42);
	ft_printf("%0+10d<--\n", 142);
	printf("%0+10d<--\n\n", 142);
	ft_printf("%0+10d<--\n", 42);
	printf("%0+10d<--\n\n", 42);
	ft_printf("%0+10d<--\n", 142);
	printf("%0+10d<--\n\n", 142);
	ft_printf("%0+10d<--\n", 20);
	printf("%0+10d<--\n\n", 20);
	ft_printf("%0+10d<--\n", 0);
	printf("%0+10d<--\n\n", 0);
	ft_printf("%0+1d<--\n", 42);
	printf("%0+1d<--\n\n", 42);

	ft_printf("%0+10d<--\n", -42);
	printf("%0+10d<--\n\n", -42);
	ft_printf("%0+10d<--\n", -142);
	printf("%0+10d<--\n\n", -142);
	ft_printf("%0+10d<--\n", -42);
	printf("%0+10d<--\n\n", -42);
	ft_printf("%0+10d<--\n", -142);
	printf("%0+10d<--\n\n", -142);
	ft_printf("%0+10d<--\n", -20);
	printf("%0+10d<--\n\n", -20);
	ft_printf("%0+10d<--\n", -50);
	printf("%0+10d<--\n\n", -50);
	ft_printf("%0+1d<--\n", -42);
	printf("%0+1d<--\n\n", -42);

	ft_printf("-->Width<--\n\n");
	ft_printf("%+10d<--\n", 42);
	printf("%+10d<--\n\n", 42);
	ft_printf("%+10d<--\n", 142);
	printf("%+10d<--\n\n", 142);
	ft_printf("%+10d<--\n", -42);
	printf("%+10d<--\n\n", -42);
	ft_printf("%+10d<--\n", -142);
	printf("%+10d<--\n\n", -142);
	ft_printf("%+10d<--\n", -20);
	printf("%+10d<--\n\n", -20);
	ft_printf("%+10d<--\n", 0);
	printf("%+10d<--\n\n", 0);
	ft_printf("%+1d<--\n", 42);
	printf("%+1d<--\n\n", 42);

	ft_printf("-->Width<--\n\n");
	ft_printf("% 10d<--\n", 42);
	printf("% 10d<--\n\n", 42);
	ft_printf("% 10d<--\n", 142);
	printf("% 10d<--\n\n", 142);
	ft_printf("% 10d<--\n", -42);
	printf("% 10d<--\n\n", -42);
	ft_printf("% 10d<--\n", -142);
	printf("% 10d<--\n\n", -142);
	ft_printf("% 10d<--\n", -20);
	printf("% 10d<--\n\n", -20);
	ft_printf("% 10d<--\n", 0);
	printf("% 10d<--\n\n", 0);
	ft_printf("% 1d<--\n", 42);
	printf("% 1d<--\n\n", 42);

	ft_printf("% 010d<--\n", 42);
	printf("% 010d<--\n\n", 42);
	ft_printf("% 010d<--\n", 142);
	printf("% 010d<--\n\n", 142);
	ft_printf("% 010d<--\n", -42);
	printf("% 010d<--\n\n", -42);
	ft_printf("% 010d<--\n", -142);
	printf("% 010d<--\n\n", -142);
	ft_printf("% 010d<--\n", -20);
	printf("% 010d<--\n\n", -20);
	ft_printf("% 010d<--\n", 0);
	printf("% 010d<--\n\n", 0);
	ft_printf("% 01d<--\n", 42);
	printf("% 01d<--\n\n", 42);

	ft_printf("%010d<--\n", 42);
	printf("%010d<--\n\n", 42);
	ft_printf("%010d<--\n", 142);
	printf("%010d<--\n\n", 142);
	ft_printf("%010d<--\n", -42);
	printf("%010d<--\n\n", -42);
	ft_printf("%010d<--\n", -142);
	printf("%010d<--\n\n", -142);
	ft_printf("%010d<--\n", -20);
	printf("%010d<--\n\n", -20);
	ft_printf("%010d<--\n", 0);
	printf("%010d<--\n\n", 0);
	ft_printf("%01d<--\n", 42);
	printf("%01d<--\n\n", 42);

	ft_printf("-->Width<--\n\n");
	ft_printf("%0+10d<--\n", 42);
	printf("%0+10d<--\n\n", 42);
	ft_printf("%0+10d<--\n", 142);
	printf("%0+10d<--\n\n", 142);
	ft_printf("%0+10d<--\n", 42);
	printf("%0+10d<--\n\n", 42);
	ft_printf("%0+10d<--\n", 142);
	printf("%0+10d<--\n\n", 142);
	ft_printf("%0+10d<--\n", 20);
	printf("%0+10d<--\n\n", 20);
	ft_printf("%0+10d<--\n", 0);
	printf("%0+10d<--\n\n", 0);
	ft_printf("%0+1d<--\n", 42);
	printf("%0+1d<--\n\n", 42);

	ft_printf("%0+10d<--\n", -42);
	printf("%0+10d<--\n\n", -42);
	ft_printf("%0+10d<--\n", -142);
	printf("%0+10d<--\n\n", -142);
	ft_printf("%0+10d<--\n", -42);
	printf("%0+10d<--\n\n", -42);
	ft_printf("%0+10d<--\n", -142);
	printf("%0+10d<--\n\n", -142);
	ft_printf("%0+10d<--\n", -20);
	printf("%0+10d<--\n\n", -20);
	ft_printf("%0+10d<--\n", -50);
	printf("%0+10d<--\n\n", -50);
	ft_printf("%0+1d<--\n", -42);
	printf("%0+1d<--\n\n", -42);

	ft_printf("%+10d<--\n", 0);
	printf("%+10d<--\n\n", 0);

	ft_printf("-->Width<--\n\n");
	ft_printf("% 10d<--\n", 42);
	printf("% 10d<--\n\n", 42);
	ft_printf("% 10d<--\n", 142);
	printf("% 10d<--\n\n", 142);
	ft_printf("% 10d<--\n", -42);
	printf("% 10d<--\n\n", -42);
	ft_printf("% 10d<--\n", -142);
	printf("% 10d<--\n\n", -142);
	ft_printf("% 10d<--\n", -20);
	printf("% 10d<--\n\n", -20);
	ft_printf("% 10d<--\n", 0);
	printf("% 10d<--\n\n", 0);
	ft_printf("% 1d<--\n", 42);
	printf("% 1d<--\n\n", 42);

	ft_printf("-->Width<--\n\n");
	ft_printf("%+10d<--\n", 42);
	printf("%+10d<--\n\n", 42);
	ft_printf("%+10d<--\n", 142);
	printf("%+10d<--\n\n", 142);
	ft_printf("%+10d<--\n", -42);
	printf("%+10d<--\n\n", -42);
	ft_printf("%+10d<--\n", -142);
	printf("%+10d<--\n\n", -142);
	ft_printf("%+10d<--\n", -20);
	printf("%+10d<--\n\n", -20);
	ft_printf("%+10d<--\n", 0);
	printf("%+10d<--\n\n", 0);
	ft_printf("%+1d<--\n", 42);
	printf("%+1d<--\n\n", 42);

	ft_printf("-->Width<--\n\n");
	ft_printf("%010d<--\n", 42);
	printf("%010d<--\n\n", 42);
	ft_printf("%010d<--\n", 142);
	printf("%010d<--\n\n", 142);
	ft_printf("%010d<--\n", -42);
	printf("%010d<--\n\n", -42);
	ft_printf("%010d<--\n", -142);
	printf("%010d<--\n\n", -142);
	ft_printf("%010d<--\n", -20);
	printf("%010d<--\n\n", -20);
	ft_printf("%010d<--\n", 0);
	printf("%010d<--\n\n", 0);
	ft_printf("%01d<--\n", 42);
	printf("%01d<--\n\n", 42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%0+.8d<--\n", 42);
	printf("%0+.8d<--\n\n", 42);
	ft_printf("%0+.8d<--\n", 142);
	printf("%0+.8d<--\n\n", 142);
	ft_printf("%0+.8d<--\n", 42);
	printf("%0+.8d<--\n\n", 42);
	ft_printf("%0+.2d<--\n", 142);
	printf("%0+.2d<--\n\n", 142);
	ft_printf("%0+.8d<--\n", 0);
	printf("%0+.8d<--\n\n", 0);

	ft_printf("%0+.8d<--\n", -42);
	printf("%0+.8d<--\n\n", -42);
	ft_printf("%0+.8d<--\n", -142);
	printf("%0+.8d<--\n\n", -142);
	ft_printf("%0+.8d<--\n", -42);
	printf("%0+.8d<--\n\n", -42);
	ft_printf("%0+.2d<--\n", -142);
	printf("%0+.2d<--\n\n", -142);
	ft_printf("%0+.8d<--\n", -8);
	printf("%0+.8d<--\n\n", -8);

	ft_printf("-->00  0  00<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%0 10.10d<--\n", 42);
	printf("%0 10.10d<--\n\n", 42);
	ft_printf("%0 10.8d<--\n", 42);
	printf("%0 10.8d<--\n\n", 42);
	ft_printf("%0 10.15d<--\n", 0);
	printf("%0 10.15d<--\n\n", 0);
	ft_printf("%0 10.8d<--\n", 20);
	printf("%0 10.8d<--\n\n", 20);
	ft_printf("%0 10.8d<--\n", 20);
	printf("%0 10.8d<--\n\n", 20);
	ft_printf("%0 10.6d<--\n", 120);
	printf("%0 10.6d<--\n\n", 120);
	ft_printf("%0 10.2d<--\n", 20);
	printf("%0 10.2d<--\n\n", 20);
	ft_printf("%0 10.2d<--\n", 0);
	printf("%0 10.2d<--\n\n", 0);
	ft_printf("%0 10.12d<--\n", 20);
	printf("%0 10.12d<--\n\n", 20);
	ft_printf("%0 10.12d<--\n", 120);
	printf("%0 10.12d<--\n\n", 120);
	ft_printf("%0 10.12d<--\n", 20);
	printf("%0 10.12d<--\n\n", 20);
	ft_printf("%0 10.12d<--\n", 0);
	printf("%0 10.12d<--\n\n", 0);

	ft_printf("CHECK\n");
	ft_printf("%0 10.10d<--\n", -42);
	printf("%0 10.10d<--\n\n", -42);

	ft_printf("%0 10.8d<--\n", -42);
	printf("%0 10.8d<--\n\n", -42);
	ft_printf("%0 10.15d<--\n", -40);
	printf("%0 10.15d<--\n\n", -40);
	ft_printf("%0 10.8d<--\n", -20);
	printf("%0 10.8d<--\n\n", -20);
	ft_printf("%0 10.7d<--\n", -20);
	printf("%0 10.7d<--\n\n", -20);
	ft_printf("%0 10.6d<--\n", -120);
	printf("%0 10.6d<--\n\n", -120);
	ft_printf("%0 10.4d<--\n", -20); // Check It :)
	printf("%0 10.4d<--\n\n", -20);
	ft_printf("%0 10.3d<--\n", -20); // Check It :)
	printf("%0 10.3d<--\n\n", -20);

	ft_printf("|||||%0 10.3d<--\n", -20); // Check It :)
	printf("|||||%0 10.3d<--\n\n", -20);
	ft_printf("|||||%0 10.2d<--\n", -20); // Check It :)
	printf("|||||%0 10.2d<--\n\n", -20);
	ft_printf("|||||%0 10.1d<--\n", -20); // Check It :)
	printf("|||||%0 10.1d<--\n\n", -20);
	ft_printf("|||||%0 10.0d<--\n", -20); // Check It :)
	printf("|||||%0 10.0d<--\n\n", -20);
	ft_printf("|||||%0 10.0d<--\n", -450); // Check It :)
	printf("|||||%0 10.0d<--\n\n", -450);


	ft_printf("|||||% 10.0d<--\n", -450); // Check It :)
	printf("|||||% 10.0d<--\n\n", -450);

	ft_printf("%0 10.2d<--\n", -40);
	printf("%0 10.2d<--\n\n", -40);
	ft_printf("%0 10.12d<--\n", -20);
	printf("%0 10.12d<--\n\n", -20);
	ft_printf("%0 10.12d<--\n", -120);
	printf("%0 10.12d<--\n\n", -120);
	ft_printf("%0 10.12d<--\n", -20);
	printf("%0 10.12d<--\n\n", -20);
	ft_printf("%0 10.12d<--\n", -50);
	printf("%0 10.12d<--\n\n", -50);

	ft_printf("-->Width<--\n\n");
	ft_printf("%0 10d<--\n", 42);
	printf("%0 10d<--\n\n", 42);
	ft_printf("%0 10d<--\n", 142);
	printf("%0 10d<--\n\n", 142);
	ft_printf("%0 10d<--\n", 42);
	printf("%0 10d<--\n\n", 42);
	ft_printf("%0 10d<--\n", 142);
	printf("%0 10d<--\n\n", 142);
	ft_printf("%0 10d<--\n", 20);
	printf("%0 10d<--\n\n", 20);
	ft_printf("%0 10d<--\n", 0);
	printf("%0 10d<--\n\n", 0);
	ft_printf("%0 1d<--\n", 42);
	printf("%0 1d<--\n\n", 42);

	ft_printf("%0 10d<--\n", -42);
	printf("%0 10d<--\n\n", -42);
	ft_printf("%0 10d<--\n", -142);
	printf("%0 10d<--\n\n", -142);
	ft_printf("%0 10d<--\n", -42);
	printf("%0 10d<--\n\n", -42);
	ft_printf("%0 10d<--\n", -142);
	printf("%0 10d<--\n\n", -142);
	ft_printf("%0 10d<--\n", -20);
	printf("%0 10d<--\n\n", -20);
	ft_printf("%0 10d<--\n", -50);
	printf("%0 10d<--\n\n", -50);
	ft_printf("%0 1d<--\n", -42);
	printf("%0 1d<--\n\n", -42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%0 .8d<--\n", 42);
	printf("%0 .8d<--\n\n", 42);
	ft_printf("%0 .8d<--\n", 142);
	printf("%0 .8d<--\n\n", 142);
	ft_printf("%0 .8d<--\n", 42);
	printf("%0 .8d<--\n\n", 42);
	ft_printf("%0 .2d<--\n", 142);
	printf("%0 .2d<--\n\n", 142);
	ft_printf("%0 .8d<--\n", 0);
	printf("%0 .8d<--\n\n", 0);

	ft_printf("%0 .8d<--\n", -42);
	printf("%0 .8d<--\n\n", -42);
	ft_printf("%0 .8d<--\n", -142);
	printf("%0 .8d<--\n\n", -142);
	ft_printf("%0 .8d<--\n", -42);
	printf("%0 .8d<--\n\n", -42);
	ft_printf("%0 .2d<--\n", -142);
	printf("%0 .2d<--\n\n", -142);
	ft_printf("%0 .8d<--\n", -8);
	printf("%0 .8d<--\n\n", -8);

	ft_printf("Space===>% 10.0d<--\n", -450); // Check It :)
	printf("Space===>% 10.0d<--\n\n", -450);
	ft_printf("|q||||% 10.1d<--\n", -450); // Check It :)
	printf("|q||||% 10.1d<--\n\n", -450);
	ft_printf("|qwd||||% 10.3d<--\n", -450); // Check It :)
	printf("|qwd||||% 10.3d<--\n\n", -450);

	ft_printf("===>%+10.0d<--\n", -450); // Check It :)
	printf("===>%+10.0d<--\n\n", -450);
	ft_printf("|||||%+10.1d<--\n", -450); // Check It :)
	printf("|||||%+10.1d<--\n\n", -450);
	ft_printf("|||||%+10.3d<--\n", -450); // Check It :)
	printf("|||||%+10.3d<--\n\n", -450);

	ft_printf("--->%-10.0d<--\n", -450); // Check It :)
	printf("--->%-10.0d<--\n\n", -450);
	ft_printf("---%-10.1d<--\n", -450); // Check It :)
	printf("---%-10.1d<--\n\n", -450);
	ft_printf("---%-10.3d<--\n", -450); // Check It :)
	printf("---%-10.3d<--\n\n", -450);

	ft_printf("A==>%010.0d<--\n", -450); // Check It :)
	printf("A==>%010.0d<--\n\n", -450);
	ft_printf("|||||%010.1d<--\n", -450); // Check It :)
	printf("|||||%010.1d<--\n\n", -450);
	ft_printf("|||||%010.3d<--\n", -450); // Check It :)
	printf("|||||%010.3d<--\n\n", -450);

	ft_printf("Empty==>%10.0d<--\n", -450); // Check It :)
	printf("Empty==>%10.0d<--\n\n", -450);
	ft_printf("|||||%10.1d<--\n", -450); // Check It :)
	printf("|||||%10.1d<--\n\n", -450);
	ft_printf("|||||%10.3d<--\n", -450); // Check It :)
	printf("|||||%10.3d<--\n\n", -450);

	ft_printf("Space===>% 10.0d<--\n", -450); // Check It :)
	printf("Space===>% 10.0d<--\n\n", -450);
	ft_printf("|||||% 10.1d<--\n", -450); // Check It :)
	printf("|||||% 10.1d<--\n\n", -450);
	ft_printf("|||||% 10.3d<--\n", -450); // Check It :)
	printf("|||||% 10.3d<--\n\n", -450);
	ft_printf("===>% 10.0d<--\n", -450); // Check It :)
	printf("===>% 10.0d<--\n\n", -450);
	ft_printf("|||||% 10.1d<--\n", -450); // Check It :)
	printf("|||||% 10.1d<--\n\n", -450);
	ft_printf("|||||% 10.3d<--\n", -450); // Check It :)
	printf("|||||% 10.3d<--\n\n", -450);
	ft_printf("===>%#10.0x<--\n", 450); // Check It :)
	printf("===>%#10.0x<--\n\n", 450);
	ft_printf("|||||%#10.1x<--\n", 450); // Check It :)
	printf("|||||%#10.1x<--\n\n", 450);
	ft_printf("|||||%#10.3x<--\n", 450); // Check It :)
	printf("|||||%#10.3x<--\n\n", 450);
	ft_printf("|||||%#10.4x<--\n", 450); // Check It :)
	printf("|||||%#10.4x<--\n\n", 450);
	ft_printf("===>%#10.0o<--\n", 450); // Check It :)
	printf("===>%#10.0o<--\n\n", 450);
	ft_printf("|||||%#10.1o<--\n", 450); // Check It :)
	printf("|||||%#10.1o<--\n\n", 450);
	ft_printf("|||||%#10.3o<--\n", 450); // Check It :)
	printf("|||||%#10.3o<--\n\n", 450);
	ft_printf("|||||%#10.4o<--\n", 450); // Check It :)
	printf("|||||%#10.4o<--\n\n", 450);

	ft_printf("-->--  -  --<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%- 10.10d<--\n", 42);
	printf("%- 10.10d<--\n\n", 42);
	ft_printf("%- 10.8d<--\n", 42);
	printf("%- 10.8d<--\n\n", 42);
	ft_printf("%- 10.15d<--\n", 0);
	printf("%- 10.15d<--\n\n", 0);
	ft_printf("%- 10.8d<--\n", 20);
	printf("%- 10.8d<--\n\n", 20);
	ft_printf("%- 10.8d<--\n", 20);
	printf("%- 10.8d<--\n\n", 20);
	ft_printf("%- 10.6d<--\n", 120);
	printf("%- 10.6d<--\n\n", 120);
	ft_printf("%- 10.2d<--\n", 20);
	printf("%- 10.2d<--\n\n", 20);
	ft_printf("%- 10.2d<--\n", 0);
	printf("%- 10.2d<--\n\n", 0);
	ft_printf("%- 10.12d<--\n", 20);
	printf("%- 10.12d<--\n\n", 20);
	ft_printf("%- 10.12d<--\n", 120);
	printf("%- 10.12d<--\n\n", 120);
	ft_printf("%- 10.12d<--\n", 20);
	printf("%- 10.12d<--\n\n", 20);
	ft_printf("%- 10.12d<--\n", 0);
	printf("%- 10.12d<--\n\n", 0);

	ft_printf("CHECK\n");
	ft_printf("%- 10.10d<--\n", -42);
	printf("%- 10.10d<--\n\n", -42);

	ft_printf("%- 10.8d<--\n", -42);
	printf("%- 10.8d<--\n\n", -42);
	ft_printf("%- 10.15d<--\n", -40);
	printf("%- 10.15d<--\n\n", -40);
	ft_printf("%- 10.8d<--\n", -20);
	printf("%- 10.8d<--\n\n", -20);
	ft_printf("%- 10.7d<--\n", -20);
	printf("%- 10.7d<--\n\n", -20);
	ft_printf("%- 10.6d<--\n", -120);
	printf("%- 10.6d<--\n\n", -120);
	ft_printf("%- 10.4d<--\n", -20); // Check It :)
	printf("%- 10.4d<--\n\n", -20);
	ft_printf("%- 10.3d<--\n", -20); // Check It :)
	printf("%- 10.3d<--\n\n", -20);

	ft_printf("%- 10.2d<--\n", -40);
	printf("%- 10.2d<--\n\n", -40);
	ft_printf("%- 10.12d<--\n", -20);
	printf("%- 10.12d<--\n\n", -20);
	ft_printf("%- 10.12d<--\n", -120);
	printf("%- 10.12d<--\n\n", -120);
	ft_printf("%- 10.12d<--\n", -20);
	printf("%- 10.12d<--\n\n", -20);
	ft_printf("%- 10.12d<--\n", -50);
	printf("%- 10.12d<--\n\n", -50);

	ft_printf("-->Width<--\n\n");
	ft_printf("%- 10d<--\n", 42);
	printf("%- 10d<--\n\n", 42);
	ft_printf("%- 10d<--\n", 142);
	printf("%- 10d<--\n\n", 142);
	ft_printf("%- 10d<--\n", 42);
	printf("%- 10d<--\n\n", 42);
	ft_printf("%- 10d<--\n", 142);
	printf("%- 10d<--\n\n", 142);
	ft_printf("%- 10d<--\n", 20);
	printf("%- 10d<--\n\n", 20);
	ft_printf("%- 10d<--\n", 0);
	printf("%- 10d<--\n\n", 0);
	ft_printf("%- 1d<--\n", 42);
	printf("%- 1d<--\n\n", 42);

	ft_printf("%- 10d<--\n", -42);
	printf("%- 10d<--\n\n", -42);
	ft_printf("%- 10d<--\n", -142);
	printf("%- 10d<--\n\n", -142);
	ft_printf("%- 10d<--\n", -42);
	printf("%- 10d<--\n\n", -42);
	ft_printf("%- 10d<--\n", -142);
	printf("%- 10d<--\n\n", -142);
	ft_printf("%- 10d<--\n", -20);
	printf("%- 10d<--\n\n", -20);
	ft_printf("%- 10d<--\n", -50);
	printf("%- 10d<--\n\n", -50);
	ft_printf("%- 1d<--\n", -42);
	printf("%- 1d<--\n\n", -42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%- .8d<--\n", 42);
	printf("%- .8d<--\n\n", 42);
	ft_printf("%- .8d<--\n", 142);
	printf("%- .8d<--\n\n", 142);
	ft_printf("%- .8d<--\n", 42);
	printf("%- .8d<--\n\n", 42);
	ft_printf("%- .2d<--\n", 142);
	printf("%- .2d<--\n\n", 142);
	ft_printf("%- .8d<--\n", 0);
	printf("%- .8d<--\n\n", 0);

	ft_printf("%- .8d<--\n", -42);
	printf("%- .8d<--\n\n", -42);
	ft_printf("%- .8d<--\n", -142);
	printf("%- .8d<--\n\n", -142);
	ft_printf("%- .8d<--\n", -42);
	printf("%- .8d<--\n\n", -42);
	ft_printf("%- .2d<--\n", -142);
	printf("%- .2d<--\n\n", -142);
	ft_printf("%- .8d<--\n", -8);
	printf("%- .8d<--\n\n", -8);

	ft_printf("-->##00#00##<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%#010.10o<--\n", 42);
	printf("%#010.10o<--\n\n", 42);

	ft_printf("%#010.8o<--\n", 42);
	printf("%#010.8o<--\n\n", 42);

	ft_printf("%#010.15o<--\n", 0);
	printf("%#010.15o<--\n\n", 0);

	ft_printf("%#010.8o<--\n", 20);
	printf("%#010.8o<--\n\n", 20);

	ft_printf("%#010.8o<--\n", 20);
	printf("%#010.8o<--\n\n", 20);

	ft_printf("%#010.6o<--\n", 120);
	printf("%#010.6o<--\n\n", 120);

	ft_printf("%#010.2o<--\n", 20);
	printf("%#010.2o<--\n\n", 20);

	ft_printf("%#010.1o<--\n", 120);
	printf("%#010.1o<--\n\n", 120);
	ft_printf("%#010.1o<--\n", 20);
	printf("%#010.1o<--\n\n", 20);
	ft_printf("%#010.2o<--\n", 0);
	printf("%#010.2o<--\n\n", 0);

	ft_printf("%#010.12o<--\n", 20);
	printf("%#010.12o<--\n\n", 20);
	ft_printf("%#010.12o<--\n", 120);
	printf("%#010.12o<--\n\n", 120);
	ft_printf("%#010.12o<--\n", 20);
	printf("%#010.12o<--\n\n", 20);
	ft_printf("%#010.12o<--\n", 0);
	printf("%#010.12o<--\n\n", 0);

	ft_printf("-->Width<--\n\n");
	ft_printf("%#010o<--\n", 42);
	printf("%#010o<--\n\n", 42);
	ft_printf("%#010o<--\n", 142);
	printf("%#010o<--\n\n", 142);
	ft_printf("%#010o<--\n", 42);
	printf("%#010o<--\n\n", 42);
	ft_printf("%#010o<--\n", 142);
	printf("%#010o<--\n\n", 142);
	ft_printf("%#010o<--\n", 20);
	printf("%#010o<--\n\n", 20);
	ft_printf("%#010o<--\n", 0);
	printf("%#010o<--\n\n", 0);
	ft_printf("%#01o<--\n", 42);
	printf("%#01o<--\n\n", 42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%#0.8o<--\n", 42);
	printf("%#0.8o<--\n\n", 42);
	ft_printf("%#0.8o<--\n", 44242422);
	printf("%#0.8o<--\n\n", 44242422);
	ft_printf("%#0.8o<--\n", 142);
	printf("%#0.8o<--\n\n", 142);
	ft_printf("%#0.8o<--\n", 42);
	printf("%#0.8o<--\n\n", 42);
	ft_printf("%#0.2o<--\n", 142);
	printf("%#0.2o<--\n\n", 142);
	ft_printf("%#0.8o<--\n", 0);
	printf("%#0.8o<--\n\n", 0);

	ft_printf("%0.8o<--\n", 42);
	printf("%0.8o<--\n\n", 42);
	ft_printf("%0.8o<--\n", 142);
	printf("%0.8o<--\n\n", 142);
	ft_printf("%0.8o<--\n", 42);
	printf("%0.8o<--\n\n", 42);
	ft_printf("%0.2o<--\n", 142);
	printf("%0.2o<--\n\n", 142);
	ft_printf("%0.8o<--\n", 0);
	printf("%0.8o<--\n\n", 0);

	ft_printf("%#0.8o<--\n", 42);
	printf("%#0.8o<--\n\n", 42);
	ft_printf("%#0.8o<--\n", 142);
	printf("%#0.8o<--\n\n", 142);
	ft_printf("%#0.8o<--\n", 42);
	printf("%#0.8o<--\n\n", 42);
	ft_printf("%#0.2o<--\n", 142);
	printf("%#0.2o<--\n\n", 142);
	ft_printf("%#0.8o<--\n", 0);
	printf("%#0.8o<--\n\n", 0);

	ft_printf("-->##00#00##<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");

	ft_printf("%#010.8o<--\n", 42);
	printf("%#010.8o<--\n\n", 42);
	ft_printf("%#010.8o<--\n", 20);
	printf("%#010.8o<--\n\n", 20);
	ft_printf("%#010.7o<--\n", 20);
	printf("%#010.7o<--\n\n", 20);
	ft_printf("%#010.6o<--\n", 120);
	printf("%#010.6o<--\n\n", 120);
	ft_printf("%#010.2o<--\n", 20);
	printf("%#010.2o<--\n\n", 20);
	ft_printf("%#010.3o<--\n", 333);
	printf("%#010.3o<--\n\n", 333);
	ft_printf("%#010.1o<--\n", 20);
	printf("%#010.1o<--\n\n", 20);
	ft_printf("%#010.2o<--\n", 0);
	printf("%#010.2o<--\n\n", 0);

	ft_printf("%#010.10o<--\n", 42);
	printf("%#010.10o<--\n\n", 42);
	ft_printf("%#010.15o<--\n", 0);
	printf("%#010.15o<--\n\n", 0);
	ft_printf("%#010.12o<--\n", 20);
	printf("%#010.12o<--\n\n", 20);
	ft_printf("%#010.12o<--\n", 120);
	printf("%#010.12o<--\n\n", 120);
	ft_printf("%#010.12o<--\n", 20);
	printf("%#010.12o<--\n\n", 20);
	ft_printf("%#010.12o<--\n", 0);
	printf("%#010.12o<--\n\n", 0);

	ft_printf("-->Width<--\n\n");
	ft_printf("%#010o<--\n", 42);
	printf("%#010o<--\n\n", 42);
	ft_printf("%#010o<--\n", 142);
	printf("%#010o<--\n\n", 142);
	ft_printf("%#010o<--\n", 42);
	printf("%#010o<--\n\n", 42);
	ft_printf("%#010o<--\n", 142);
	printf("%#010o<--\n\n", 142);
	ft_printf("%#010o<--\n", 20);
	printf("%#010o<--\n\n", 20);
	ft_printf("%#010o<--\n", 0);
	printf("%#010o<--\n\n", 0);
	ft_printf("%#01o<--\n", 42);
	printf("%#01o<--\n\n", 42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%#0.8o<--\n", 42);
	printf("%#0.8o<--\n\n", 42);
	ft_printf("%#0.8o<--\n", 142);
	printf("%#0.8o<--\n\n", 142);
	ft_printf("%#0.8o<--\n", 42);
	printf("%#0.8o<--\n\n", 42);
	ft_printf("%#0.2o<--\n", 142);
	printf("%#0.2o<--\n\n", 142);
	ft_printf("%#0.8o<--\n", 0);
	printf("%#0.8o<--\n\n", 0);

	ft_printf("%#010o<--\n", +42);
	printf("%#010o<--\n", +42);
	ft_printf("%#010o<--\n", 0);
	printf("%#010o<--\n", 0);

	ft_printf("%-10.2d<--\n", 20);
	printf("%-10.2d<--\n\n", 20);
	ft_printf("%-10.1d<--\n", 20);
	printf("%-10.1d<--\n\n", 20);
	ft_printf("%-10.0d<--\n", 20);
	printf("%-10.0d<--\n\n", 20);
	ft_printf("%-10.2d<--\n", -20);
	printf("%-10.2d<--\n\n", -20);
	ft_printf("%-10.1d<--\n", -20);
	printf("%-10.1d<--\n\n", -20);
	ft_printf("%-10.0d<--\n", -20);
	printf("%-10.0d<--\n\n", -20);

	ft_printf("%010.2d<--\n", 20);
	printf("%010.2d<--\n\n", 20);
	ft_printf("%010.1d<--\n", 20);
	printf("%010.1d<--\n\n", 20);
	ft_printf("%010.0d<--\n", 20);
	printf("%010.0d<--\n\n", 20);
	ft_printf("%010.2d<--\n", -20);
	printf("%010.2d<--\n\n", -20);
	ft_printf("%010.1d<--\n", -20);
	printf("%010.1d<--\n\n", -20);
	ft_printf("%010.0d<--\n", -20);
	printf("%010.0d<--\n\n", -20);

	ft_printf("%0 10.2d<--\n", 20);
	printf("%0 10.2d<--\n\n", 20);
	ft_printf("%0 10.1d<--\n", 20);
	printf("%0 10.1d<--\n\n", 20);
	ft_printf("%0 10.0d<--\n", 20);
	printf("%0 10.0d<--\n\n", 20);
	ft_printf("%0 10.2d<--\n", -20);
	printf("%0 10.2d<--\n\n", -20);
	ft_printf("%0 10.1d<--\n", -20);
	printf("%0 10.1d<--\n\n", -20);
	ft_printf("%0 10.0d<--\n", -20);
	printf("%0 10.0d<--\n\n", -20);

	ft_printf("%010.3d<--\n", -20);
	printf("%010.3d<--\n\n", -20);
	ft_printf("% 10.3d<--\n", -20);
	printf("% 10.3d<--\n\n", -20);

	ft_printf("%10.2d<--\n", 20);
	printf("%10.2d<--\n\n", 20);
	ft_printf("%10.1d<--\n", 20);
	printf("%10.1d<--\n\n", 20);
	ft_printf("%10.0d<--\n", 20);
	printf("%10.0d<--\n\n", 20);
	ft_printf("%10.2d<--\n", -20);
	printf("%10.2d<--\n\n", -20);
	ft_printf("%10.1d<--\n", -20);
	printf("%10.1d<--\n\n", -20);
	ft_printf("%10.0d<--\n", -20);
	printf("%10.0d<--\n\n", -20);

	ft_printf("%10.2o<--\n", 20);
	printf("%10.2o<--\n\n", 20);
	ft_printf("%10.1o<--\n", 20);
	printf("%10.1o<--\n\n", 20);
	ft_printf("%10.0o<--\n", 20);
	printf("%10.0o<--\n\n", 20);
	ft_printf("%10.2o<--\n", -20);
	printf("%10.2o<--\n\n", -20);
	ft_printf("%10.1o<--\n", -20);
	printf("%10.1o<--\n\n", -20);
	ft_printf("%10.0o<--\n", -20); //------------------------------------------
	printf("%10.0o<--\n\n", -20);

	ft_printf("%#010.3o<--\n", 20);
	printf("%#010.3o<--\n\n", 20);
	ft_printf("%#010.2o<--\n", 20);
	printf("%#010.2o<--\n\n", 20);
	ft_printf("%#010.1o<--\n", 20);
	printf("%#010.1o<--\n\n", 20);
	ft_printf("%#010.0o<--\n", 20);
	printf("%#010.0o<--\n\n", 20);

	ft_printf("%#010.3o<--\n", 20);
	printf("%#010.3o<--\n\n", 20);
	ft_printf("%#010.2o<--\n", 20);
	printf("%#010.2o<--\n\n", 20);
	ft_printf("%#010.1o<--\n", 20);
	printf("%#010.1o<--\n\n", 20);
	ft_printf("%#010.0o<--\n", 120);
	printf("%#010.0o<--\n\n", 120);

	ft_printf("%#010.3o<--\n", 20);
	printf("%#010.3o<--\n\n", 20);
	ft_printf("%#010.2o<--\n", 20);
	printf("%#010.2o<--\n\n", 20);
	ft_printf("%#010.1o<--\n", 20);
	printf("%#010.1o<--\n\n", 20);
	ft_printf("%#010.0o<--\n", 20);
	printf("%#010.0o<--\n\n", 20);

	ft_printf("%#010.3O<--\n", 20);
	printf("%#010.3O<--\n\n", 20);
	ft_printf("%#010.2O<--\n", 20);
	printf("%#010.2O<--\n\n", 20);
	ft_printf("%#010.1O<--\n", 20);
	printf("%#010.1O<--\n\n", 20);
	ft_printf("%#010.0O<--\n", 20);
	printf("%#010.0O<--\n\n", 20);

	ft_printf("-->##--x--##<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%#-10.12o<--\n", 42);
	printf("%#-10.12o<--\n\n", 42);
	ft_printf("%#-10.10o<--\n", 42);
	printf("%#-10.10o<--\n\n", 42);
	ft_printf("%#-10.8o<--\n", 42);
	printf("%#-10.8o<--\n\n", 42);
	ft_printf("%#-10.15o<--\n", 0);
	printf("%#-10.15o<--\n\n", 0);
	ft_printf("%#-10.8o<--\n", 20);
	printf("%#-10.8o<--\n\n", 20);
	ft_printf("%#-10.8o<--\n", 20);
	printf("%#-10.8o<--\n\n", 20);
	ft_printf("%#-10.6o<--\n", 120);
	printf("%#-10.6o<--\n\n", 120);
	ft_printf("%#-10.2o<--\n", 20);
	printf("%#-10.2o<--\n\n", 20);

	ft_printf("%#-10.1o<--\n", 120);
	printf("%#-10.1o<--\n\n", 120);
	ft_printf("%#-10.1o<--\n", 20);
	printf("%#-10.1o<--\n\n", 20);
	ft_printf("%#-10.2o<--\n", 0);
	printf("%#-10.2o<--\n\n", 0);

	ft_printf("%#-10.12o<--\n", 20);
	printf("%#-10.12o<--\n\n", 20);
	ft_printf("%#-10.12o<--\n", 120);
	printf("%#-10.12o<--\n\n", 120);
	ft_printf("%#-10.12o<--\n", 20);
	printf("%#-10.12o<--\n\n", 20);
	ft_printf("%#-10.12o<--\n", 0);
	printf("%#-10.12o<--\n\n", 0);

	ft_printf("-->Width<--\n\n");
	ft_printf("%#-10o<--\n", 42);
	printf("%#-10o<--\n\n", 42);
	ft_printf("%#-10o<--\n", 142);
	printf("%#-10o<--\n\n", 142);
	ft_printf("%#-10o<--\n", 42);
	printf("%#-10o<--\n\n", 42);
	ft_printf("%#-10o<--\n", 142);
	printf("%#-10o<--\n\n", 142);
	ft_printf("%#-10o<--\n", 20);
	printf("%#-10o<--\n\n", 20);
	ft_printf("%#-10o<--\n", 0);
	printf("%#-10o<--\n\n", 0);
	ft_printf("%#-1o<--\n", 42);
	printf("%#-1o<--\n\n", 42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%#-.8o<--\n", 42);
	printf("%#-.8o<--\n\n", 42);
	ft_printf("%#-.8o<--\n", 142);
	printf("%#-.8o<--\n\n", 142);
	ft_printf("%#-.8o<--\n", 42);
	printf("%#-.8o<--\n\n", 42);
	ft_printf("%#-.2o<--\n", 142);
	printf("%#-.2o<--\n\n", 142);
	ft_printf("%#-.8o<--\n", 0);
	printf("%#-.8o<--\n\n", 0);

	ft_printf("-->##--O--##<--\n\n");

	ft_printf("-->Width_Precision<--\n\n");

	ft_printf("%#-10.8o<--\n", 42);
	printf("%#-10.8o<--\n\n", 42);
	ft_printf("%#-10.8o<--\n", 20);
	printf("%#-10.8o<--\n\n", 20);
	ft_printf("%#-10.7o<--\n", 20);
	printf("%#-10.7o<--\n\n", 20);
	ft_printf("%#-10.6o<--\n", 120);
	printf("%#-10.6o<--\n\n", 120);
	ft_printf("%#-10.2o<--\n", 20);
	printf("%#-10.2o<--\n\n", 20);
	ft_printf("%#-10.3o<--\n", 333);
	printf("%#-10.3o<--\n\n", 333);
	ft_printf("%#-10.1o<--\n", 20);
	printf("%#-10.1o<--\n\n", 20);
	ft_printf("%#-10.2o<--\n", 0);
	printf("%#-10.2o<--\n\n", 0);

	ft_printf("%#-10.10o<--\n", 42);
	printf("%#-10.10o<--\n\n", 42);
	ft_printf("%#-10.15o<--\n", 0);
	printf("%#-10.15o<--\n\n", 0);
	ft_printf("%#-10.12o<--\n", 20);
	printf("%#-10.12o<--\n\n", 20);
	ft_printf("%#-10.12o<--\n", 120);
	printf("%#-10.12o<--\n\n", 120);
	ft_printf("%#-10.12o<--\n", 20);
	printf("%#-10.12o<--\n\n", 20);
	ft_printf("%#-10.12o<--\n", 0);
	printf("%#-10.12o<--\n\n", 0);

	ft_printf("-->Width<--\n\n");
	ft_printf("%#-10o<--\n", 42);
	printf("%#-10o<--\n\n", 42);
	ft_printf("%#-10o<--\n", 142);
	printf("%#-10o<--\n\n", 142);
	ft_printf("%#-10o<--\n", 42);
	printf("%#-10o<--\n\n", 42);
	ft_printf("%#-10o<--\n", 142);
	printf("%#-10o<--\n\n", 142);
	ft_printf("%#-10o<--\n", 20);
	printf("%#-10o<--\n\n", 20);
	ft_printf("%#-10o<--\n", 0);
	printf("%#-10o<--\n\n", 0);
	ft_printf("%#-1o<--\n", 42);
	printf("%#-1o<--\n\n", 42);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%#-.8o<--\n", 42);
	printf("%#-.8o<--\n\n", 42);
	ft_printf("%#-.8o<--\n", 142);
	printf("%#-.8o<--\n\n", 142);
	ft_printf("%#-.8o<--\n", 42);
	printf("%#-.8o<--\n\n", 42);
	ft_printf("%#-.2o<--\n", 142);
	printf("%#-.2o<--\n\n", 142);
	ft_printf("%#-.8o<--\n", 0);
	printf("%#-.8o<--\n\n", 0);

	ft_printf("%#-10.3o<--\n", 20);
	printf("%#-10.3o<--\n\n", 20);
	ft_printf("%#-10.2o<--\n", 20);
	printf("%#-10.2o<--\n\n", 20);
	ft_printf("%#-10.1o<--\n", 20);
	printf("%#-10.1o<--\n\n", 20);
	ft_printf("%#-10.0o<--\n", 20);
	printf("%#-10.0o<--\n\n", 20);

	ft_printf("%#-10.3O<--\n", 20);
	printf("%#-10.3O<--\n\n", 20);
	ft_printf("%#-10.2O<--\n", 20);
	printf("%#-10.2O<--\n\n", 20);
	ft_printf("%#-10.1O<--\n", 20);
	printf("%#-10.1O<--\n\n", 20);
	ft_printf("%#-10.0O<--\n", 20);
	printf("%#-10.0O<--\n\n", 20);

	ft_printf("-->ppp<--\n\n");

	int p = 10;

	ft_printf("%-25p<--\n", &p);
	printf("%-25p<--\n\n", &p);
	ft_printf("%-15p<--\n", &p);
	printf("%-15p<--\n\n", &p);
	ft_printf("%-14p<--\n", &p);
	printf("%-14p<--\n\n", &p);
	ft_printf("%-13p<--\n", &p);
	printf("%-13p<--\n\n", &p);
	ft_printf("%-12p<--\n", &p);
	printf("%-12p<--\n\n", &p);
	ft_printf("%-11p<--\n", &p);
	printf("%-11p<--\n\n", &p);
	ft_printf("%-10p<--\n", &p);
	printf("%-10p<--\n\n", &p);
	ft_printf("%-p<--\n", &p);
	printf("%-p<--\n\n", &p);
	ft_printf("%-5p<--\n", &p);
	printf("%-5p<--\n\n", &p);

	ft_printf("%25p<--\n", &p);
	printf("%25p<--\n\n", &p);
	ft_printf("%15p<--\n", &p);
	printf("%15p<--\n\n", &p);
	ft_printf("%14p<--\n", &p);
	printf("%14p<--\n\n", &p);
	ft_printf("%13p<--\n", &p);
	printf("%13p<--\n\n", &p);
	ft_printf("%12p<--\n", &p);
	printf("%12p<--\n\n", &p);
	ft_printf("%11p<--\n", &p);
	printf("%11p<--\n\n", &p);
	ft_printf("%10p<--\n", &p);
	printf("%10p<--\n\n", &p);
	ft_printf("%p<--\n", &p);
	printf("%p<--\n\n", &p);

	ft_printf("%5p %d %#-25o<--\n", &p, 1111, 25);
	printf("%5p %d %#-25o<--\n\n", &p, 1111, 25);

	printf("-->-s-s-<--\n\n");

	char *s = "Hello";

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%-10.10s<--\n", s);
	printf("%-10.10s<--\n\n", s);
	ft_printf("%-10.25s<--\n", s);
	printf("%-10.25s<--\n\n", s);
	ft_printf("%-10.15s<--\n", s);
	printf("%-10.15s<--\n\n", s);
	ft_printf("%-10.12s<--\n", s);
	printf("%-10.12s<--\n\n", s);
	ft_printf("%-10.8s<--\n", s);
	printf("%-10.8s<--\n\n", s);
	ft_printf("%-10.8s<--\n", s);
	printf("%-10.8s<--\n\n", s);
	ft_printf("%-10.6s<--\n", s);
	printf("%-10.6s<--\n\n", s);
	ft_printf("%-10.5s<--\n", s);
	printf("%-10.5s<--\n\n", s);
	ft_printf("%-10.0s<--\n", s);
	printf("%-10.0s<--\n\n", s);
	ft_printf("%-10.2s<--\n", s);
	printf("%-10.2s<--\n\n", s);
	ft_printf("%-10.3s<--\n", s);
	printf("%-10.3s<--\n\n", s);
	ft_printf("%-10.4s<--\n", s);
	printf("%-10.4s<--\n\n", s);


	ft_printf("-->Width<--\n\n");
	ft_printf("%-10s<--\n", s);
	printf("%-10s<--\n\n", s);
	ft_printf("%-9s<--\n", s);
	printf("%-9s<--\n\n", s);
	ft_printf("%-7s<--\n", s);
	printf("%-7s<--\n\n", s);
	ft_printf("%-5s<--\n", s);
	printf("%-5s<--\n\n", s);
	ft_printf("%-4s<--\n", s);
	printf("%-4s<--\n\n", s);
	ft_printf("%-3s<--\n", s);
	printf("%-3s<--\n\n", s);
	ft_printf("%-6s<--\n", s);
	printf("%-6s<--\n\n", s);

	ft_printf("-->Precision<--\n\n");
	ft_printf("-%-.25s<--\n", s);
	printf("-%-.25s<--\n\n", s);
	ft_printf("%-.5s<--\n", s);
	printf("%-.5s<--\n\n", s);
	ft_printf("%-.4s<--\n", s);
	printf("%-.4s<--\n\n", s);
	ft_printf("%-.2s<--\n", s);
	printf("%-.2s<--\n\n", s);
	ft_printf("%-.0s<--\n", s);
	printf("%-.0s<--\n\n", s);

	ft_printf("%-10s<--\n", "Hello");
	printf("%-10s<--\n\n", "Hello");
	ft_printf("%-2s<--\n", "Hello");
	printf("%-2s<--\n\n", "Hello");
	ft_printf("%-25s<--\n", "Hello");
	printf("%-25s<--\n\n", "Hello");

	ft_printf("%-10.2s<--\n", "Hello");
	printf("%-10.2s<--\n\n", "Hello");

	ft_printf("%-20.25s$\n", NULL);
	printf("%-20.25s$\n", NULL);
	ft_printf("%-20.20s$\n", NULL);
	printf("%-20.20s$\n", NULL);
	ft_printf("%-20.19s$\n", NULL);
	printf("%-20.19s$\n", NULL);
	ft_printf("%-20.18s$\n", NULL);
	printf("%-20.18s$\n", NULL);
	ft_printf("%-20.15s$\n", NULL);
	printf("%-20.15s$\n", NULL);
	ft_printf("%-20.11s$\n", NULL);
	printf("%-20.11s$\n", NULL);
	ft_printf("%-20.10s$\n", NULL);
	printf("%-20.10s$\n", NULL);
	ft_printf("%-20.6s$\n", NULL);
	printf("%-20.6s$\n", NULL);
	ft_printf("%-20.5s$\n", NULL);
	printf("%-20.5s$\n", NULL);
	ft_printf("%-20.0s$\n", NULL);
	printf("%-20.0s$\n\n", NULL);

	ft_printf("%-25.20s$\n", NULL);
	printf("%-25.20s$\n", NULL);
	ft_printf("%-20.20s$\n", NULL);
	printf("%-20.20s$\n", NULL);
	ft_printf("%-19.20s$\n", NULL);
	printf("%-19.20s$\n", NULL);
	ft_printf("%-18.20s$\n", NULL);
	printf("%-18.20s$\n", NULL);
	ft_printf("%-15.20s$\n", NULL);
	printf("%-15.20s$\n", NULL);
	ft_printf("%-11.20s$\n", NULL);
	printf("%-11.20s$\n", NULL);
	ft_printf("%-10.20s$\n", NULL);
	printf("%-10.20s$\n", NULL);
	ft_printf("%-6.20s$--\n", NULL);
	printf("%-6.20s$--\n", NULL);
	ft_printf("%-4.20s$++\n", NULL);
	printf("%-4.20s$++\n", NULL);
	ft_printf("%-5.20s$\n", NULL);
	printf("%-5.20s$\n", NULL);
	ft_printf("%-.20s$\n", NULL);
	printf("%-.20s$\n", NULL);

	printf("-->sss<--\n\n");

	ft_printf("%10.2s<--\n", "Hello");
	printf("%10.2s<--\n\n", "Hello");
	ft_printf("%10s<--\n", "Hello");
	printf("%10s<--\n\n", "Hello");

	ft_printf("-->Width_Precision<--\n\n");
	ft_printf("%10.10s<--\n", s);
	printf("%10.10s<--\n\n", s);
	ft_printf("%10.25s<--\n", s);
	printf("%10.25s<--\n\n", s);
	ft_printf("%10.15s<--\n", s);
	printf("%10.15s<--\n\n", s);
	ft_printf("%10.12s<--\n", s);
	printf("%10.12s<--\n\n", s);
	ft_printf("%10.8s<--\n", s);
	printf("%10.8s<--\n\n", s);
	ft_printf("%10.8s<--\n", s);
	printf("%10.8s<--\n\n", s);
	ft_printf("%10.6s<--\n", s);
	printf("%10.6s<--\n\n", s);
	ft_printf("%10.5s<--\n", s);
	printf("%10.5s<--\n\n", s);
	ft_printf("%10.0s<--\n", s);
	printf("%10.0s<--\n\n", s);
	ft_printf("%10.2s<--\n", s);
	printf("%10.2s<--\n\n", s);
	ft_printf("%10.3s<--\n", s);
	printf("%10.3s<--\n\n", s);
	ft_printf("%10.4s<--\n", s);
	printf("%10.4s<--\n\n", s);
	ft_printf("%4s<--\n", s);
	printf("%4s<--\n\n", s);
	ft_printf("%-4.20s<--\n", s);
	printf("%-4.20s<--\n\n", s);
	ft_printf("%4.0d<--\n", 0);
	printf("%4.0d<--\n\n", 0);
	ft_printf("%4.0d<--\n", 25);
	printf("%4.0d<--\n\n", 25);
	ft_printf("%-4.0o<--\n", 120);
	printf("%-4.0o<--\n\n", 120);
	ft_printf("%4.0o<--\n", 0);
	printf("%4.0o<--\n\n", 0);
	ft_printf("%4.0o<--\n", 25);
	printf("%4.0o<--\n\n", 25);
	ft_printf("%-4.0d<--\n", 120);
	printf("%-4.0d<--\n\n", 120);
	ft_printf("%.0o<--\n", 0);
	printf("%.0o<--\n\n", 0);

	ft_printf("%20.25s$\n", NULL);
	printf("%20.25s$\n", NULL);
	ft_printf("%20.20s$\n", NULL);
	printf("%20.20s$\n", NULL);
	ft_printf("%20.19s$\n", NULL);
	printf("%20.19s$\n", NULL);
	ft_printf("%20.18s$\n", NULL);
	printf("%20.18s$\n", NULL);
	ft_printf("%20.15s$\n", NULL);
	printf("%20.15s$\n", NULL);
	ft_printf("%20.11s$\n", NULL);
	printf("%20.11s$\n", NULL);
	ft_printf("%20.10s$\n", NULL);
	printf("%20.10s$\n", NULL);
	ft_printf("%20.6s$\n", NULL);
	printf("%20.6s$\n", NULL);
	ft_printf("%20.5s$\n", NULL);
	printf("%20.5s$\n", NULL);
	ft_printf("%20.0s$\n", NULL);
	printf("%20.0s$\n\n", NULL);

	ft_printf("%25.20s$\n", NULL);
	printf("%25.20s$\n", NULL);
	ft_printf("%20.20s$\n", NULL);
	printf("%20.20s$\n", NULL);
	ft_printf("%19.20s$\n", NULL);
	printf("%19.20s$\n", NULL);
	ft_printf("%18.20s$\n", NULL);
	printf("%18.20s$\n", NULL);
	ft_printf("%15.20s$\n", NULL);
	printf("%15.20s$\n", NULL);
	ft_printf("%11.20s$\n", NULL);
	printf("%11.20s$\n", NULL);
	ft_printf("%10.20s$\n", NULL);
	printf("%10.20s$\n", NULL);
	ft_printf("%6.20s$--\n", NULL);
	printf("%6.20s$--\n", NULL);
	ft_printf("%4.20s$++\n", NULL);
	printf("%4.20s$++\n", NULL);
	ft_printf("%5.20s$\n", NULL);
	printf("%5.20s$\n", NULL);
	ft_printf("%.20s$\n", NULL);
	printf("%.20s$\n", NULL);


	ft_printf("-->Width<--\n\n");
	ft_printf("%10s<--\n", s);
	printf("%10s<--\n\n", s);
	ft_printf("%9s<--\n", s);
	printf("%9s<--\n\n", s);
	ft_printf("%7s<--\n", s);
	printf("%7s<--\n\n", s);
	ft_printf("%5s<--\n", s);
	printf("%5s<--\n\n", s);
	ft_printf("%4s<--\n", s);
	printf("%4s<--\n\n", s);
	ft_printf("%3s<--\n", s);
	printf("%3s<--\n\n", s);
	ft_printf("%6s<--\n", s);
	printf("%6s<--\n\n", s);

	ft_printf("-->Precision<--\n\n");
	ft_printf("%.25s<--\n", s);
	printf("%.25s<--\n\n", s);
	ft_printf("%.6s<--\n", s);
	printf("%.6s<--\n\n", s);
	ft_printf("%.5s<--\n", s);
	printf("%.5s<--\n\n", s);
	ft_printf("%.4s<--\n", s);
	printf("%.4s<--\n\n", s);
	ft_printf("%.2s<--\n", s);
	printf("%.2s<--\n\n", s);
	ft_printf("%.0s<--\n", s);
	printf("%.0s<--\n\n", s);

	ft_printf("-->-S-S-S-<--\n\n");

	wchar_t *S = L"Привет ☕  ⚔  ⚒  ⚓  ⑨ ";

	ft_printf("-->Width<--\n\n");
	ft_printf("%-35S<--\n", S);
	printf("%-35S<--\n\n", S);
	ft_printf("%-60S<--\n", S);
	printf("%-60S<--\n\n", S);
	ft_printf("%-45S<--\n", S);
	printf("%-45S<--\n\n", S);
	ft_printf("%-15S<--\n", S);
	printf("%-15S<--\n\n", S);
	ft_printf("%-40S<--\n", S);
	printf("%-40S<--\n\n", S);
	ft_printf("%-3S<--\n", S);
	printf("%-3S<--\n\n", S);
	ft_printf("%-6S<--\n", S);
	printf("%-6S<--\n\n", S);

	ft_printf("M\n");

	ft_printf("%35S<--\n", S);
	printf("%35S<--\n\n", S);
	ft_printf("%60S<--\n", S);
	printf("%60S<--\n\n", S);
	ft_printf("%45S<--\n", S);
	printf("%45S<--\n\n", S);
	ft_printf("%15S<--\n", S);
	printf("%15S<--\n\n", S);
	ft_printf("%40S<--\n", S);
	printf("%40S<--\n\n", S);
	ft_printf("%3S<--\n", S);
	printf("%3S<--\n\n", S);
	ft_printf("%6S<--\n", S);
	printf("%6S<--\n\n", S);

	ft_printf("%S<--\n", S);
	printf("%S<--\n\n", S);

	printf("%d\n", ft_printf("%-S %-25.25d<--\n", S, 20));
	printf("%d\n", printf("%-S %-25.25d<--\n", S, 20));
	printf("%d\n", ft_printf("%-S<--\n", S));
	printf("%d\n", printf("%-S<--\n", S));

	ft_printf("-->-c-c-c-<--\n\n");

	char c1 = '@';

	ft_printf("-->Width<--\n\n");
	ft_printf("%-35c<--\n", c1);
	printf("%-35c<--\n\n", c1);
	ft_printf("%-60c<--\n", c1);
	printf("%-60c<--\n\n", c1);
	ft_printf("%-45c<--\n", c1);
	printf("%-45c<--\n\n", c1);
	ft_printf("%-15c<--\n", c1);
	printf("%-15c<--\n\n", c1);
	ft_printf("%-40c<--\n", c1);
	printf("%-40c<--\n\n", c1);
	ft_printf("%-3c<--\n", c1);
	printf("%-3c<--\n\n", c1);
	ft_printf("%-6c<--\n", c1);
	printf("%-6c<--\n\n", c1);
	ft_printf("%-1c<--\n", c1);
	printf("%-1c<--\n\n", c1);

	ft_printf("%35c<--\n", c1);
	printf("%35c<--\n\n", c1);
	ft_printf("%60c<--\n", c1);
	printf("%60c<--\n\n", c1);
	ft_printf("%45c<--\n", c1);
	printf("%45c<--\n\n", c1);
	ft_printf("%15c<--\n", c1);
	printf("%15c<--\n\n", c1);
	ft_printf("%40c<--\n", c1);
	printf("%40c<--\n\n", c1);
	ft_printf("%3c<--\n", c1);
	printf("%3c<--\n\n", c1);
	ft_printf("%6c<--\n", c1);
	printf("%6c<--\n\n", c1);
	ft_printf("%1c<--\n", c1);
	printf("%1c<--\n\n", c1);

	ft_printf("-->-c-c-c-<--\n\n");

	ft_printf("-->Width<--\n\n");
	ft_printf("%-35C<--\n", C);
	printf("%-35C<--\n\n", C);
	ft_printf("%-60C<--\n", C);
	printf("%-60C<--\n\n", C);
	ft_printf("%-45C<--\n", C);
	printf("%-45C<--\n\n", C);
	ft_printf("%-15C<--\n", C);
	printf("%-15C<--\n\n", C);
	ft_printf("%-40C<--\n", C);
	printf("%-40C<--\n\n", C);
	ft_printf("%-3C<--\n", C);
	printf("%-3C<--\n\n", C);
	ft_printf("%-6C<--\n", C);
	printf("%-6C<--\n\n", C);
	ft_printf("%-1C<--\n", C);
	printf("%-1C<--\n\n", C);

	ft_printf("%35C<--\n", C);
	printf("%35C<--\n\n", C);
	ft_printf("%60C<--\n", C);
	printf("%60C<--\n\n", C);
	ft_printf("%45C<--\n", C);
	printf("%45C<--\n\n", C);
	ft_printf("%15C<--\n", C);
	printf("%15C<--\n\n", C);
	ft_printf("%40C<--\n", C);
	printf("%40C<--\n\n", C);
	ft_printf("%3C<--\n", C);
	printf("%3C<--\n\n", C);
	ft_printf("%6C<--\n", C);
	printf("%6C<--\n\n", C);
	ft_printf("%1C<--\n", C);
	printf("%1C<--\n\n", C);

	ft_printf("--------------------->CHECK-CCC-CHECK<---------------------\n");
	ft_printf("%d$$$\n", ft_printf("%1C<--\n", 0xD7FF));
 	printf("%d$$$\n", printf("%1C<--\n", 0xD7FF));
	ft_printf("%d$$$\n", ft_printf("%1C<--\n", 280));
	printf("%d$$$\n", printf("%1C<--\n", 280));
	ft_printf("%1C<--\n", 0xDFFF);
	printf("%1C<--\n", 0xDFFF);
	ft_printf("%1C<--\n", 8364);
	printf("%1C<--\n\n", 8364);
	ft_printf("%1C<--\n", 0xF8FF);
	printf("%1C<--\n\n", 0xF8FF);
	ft_printf("%1C  <--\n", 917504 + 9999999);
	printf("%1C  <--\n", 917504 + 9999999);
	ft_printf("%d$$$\n", ft_printf("%1C  <==\n", 0x10FFFF));
	printf("%d$$$\n",printf("%1C  <++\n", 0x10FFFF));

	ft_printf("\n%d ==>\n", ft_printf("null %C and text$\n", 0xD800));
	printf("\n%d -->\n", printf("null %C and text$\n", 0xD800));

	ft_printf("--->UNICODE<---\n");
	ft_printf("%d\n", ft_printf("%1C  <==\n", 0xD800 - 1));
	printf("%d\n", printf("%1C  <==\n", 0xD800 - 1));
	ft_printf("%d\n", ft_printf("%1C  <==\n", 0xDFFF + 1));
	printf("%d\n", printf("%1C  <==\n", 0xDFFF + 1));
	ft_printf("%d\n", ft_printf("%1C  <==\n", 0x10FFFF));
	printf("%d\n", printf("%1C  <==\n", 0x10FFFF));
	ft_printf("%d\n", ft_printf("%1C  <==\n", 0));
	printf("%d\n", printf("%1C  <==\n", 0));
	int a = 1;
	while (a <= 5)
	{
		ft_printf("%d\n", ft_printf("%C  $\n", a));
		printf("%d\n", printf("%C  $\n", a));
		ft_printf("%C\n", a);
		printf("%C\n", a);
		a++;
	}
	a = 1;
	while (a <= 255)
	{
		ft_printf("%d\n", ft_printf("%c$\n", a));
		printf("%d\n", printf("%c$\n", a));
		a++;
	}

	ft_printf("%d\n", ft_printf("%1C  <==\n", 0xD800));
	printf("%d\n", printf("%1C  <==\n", 0xD800));
	ft_printf("%d\n", ft_printf("%1C  <==\n", 55294));
	printf("%d\n", printf("%1C  <==\n", 55294));
	ft_printf("%d\n", ft_printf("%1C  <==\n", -1));
	printf("%d\n", printf("%1C  <==\n", -1));

	ft_printf("%d\n", ft_printf("%10S  <==\n", L"\x0xDFFF"));
	printf("%d\n",printf("%10S  <++\n", L"\x0xDFFF")); ////

	ft_printf("%d\n", ft_printf("%c$$$\n", -1));
	printf("%d\n", printf("%c$$$\n", -1));

	ft_printf("%d\n", ft_printf("%c$$$\n", 65));
	printf("%d\n", printf("%c$$$\n", 65));

	ft_printf("%d\n", ft_printf("%d$$$\n", 65));
	printf("%d\n", printf("%d$$$\n", 65));

	ft_printf("%d\n", ft_printf("Hello World\n"));
	printf("%d\n", printf("Hello World\n"));

	ft_printf("%d - %d\n", ft_printf("%% %% %% %% %%\n"), printf("%% %% %% %% %%\n"));
	printf("%d - %d\n", ft_printf("%% %% %% %% %%\n"), printf("%% %% %% %% %%\n"));
	ft_printf("%d", ft_printf("%1C<--\n", 0xD7FF));
	printf("%d", printf("%1C<--\n", 0xD7FF));

	i = 0;

	ft_printf("%-10.0x<--\n", 11);
	printf("%-10.0x<--\n\n", 11);
	ft_printf("%-10.0x<--\n", 27);
	printf("%-10.0x<--\n\n", 27);
	ft_printf("%-10.0x<--\n", 10);
	printf("%-10.0x<--\n\n", 10);
	ft_printf("%-10.0o<--\n", 10);
	printf("%-10.0o<--\n\n", 10);
	ft_printf("%-10.0x<--\n", 25);
	printf("%-10.0x<--\n\n", 25);

	int k = 0;
	while(k < 17)
	{
		ft_printf("%-10.0x<--\n", k);
		printf("%-10.0x<--\n\n", k);
		k++;
	}

	k = 0;
	while(k < 18)
	{
		ft_printf("%-10.0o<--\n", k);
		printf("%-10.0o<--\n\n", k);
		k++;
	}

	ft_printf("%20.10s333\n", NULL);
	printf("%20.10s333\n", NULL);
	ft_printf("111%10s333\n", "222");
	printf("111%10s333\n", "222");
	ft_printf("%-10.0x<--\n", i);
	printf("%-10.0x<--\n\n", i);
	ft_printf("%-10.0d<--\n", i);
	printf("%-10.0d<--\n\n", i);

	ft_printf("035.0x %035.0x<--\n", i);
	printf("035.0x %035.0x<--\n\n", i);
	ft_printf("35.0x %-35.0x<--\n", i);
	printf("35.0x %-35.0x<--\n\n", i);
	ft_printf("35.0x %35.0x<--\n", i);
	printf("35.0x %35.0x<--\n\n", i);

	ft_printf("035.0x %035.0x<--\n", i);
	printf("035.0x %035.0x<--\n\n", i);
	ft_printf("35.0x %-35.0x<--\n", i);
	printf("35.0x %-35.0x<--\n\n", i);
	ft_printf("35.0x %35.0x<--\n", i);
	printf("35.0x %35.0x<--\n\n", i);

	ft_printf("035.0x %035.0X<--\n", i);
	printf("035.0x %035.0X<--\n\n", i);
	ft_printf("35.0x %-35.0X<--\n", i);
	printf("35.0x %-35.0X<--\n\n", i);
	ft_printf("35.0x %35.0X<--\n", i);
	printf("35.0x %35.0X<--\n\n", i);

	ft_printf("35.0x %35p<--\n", &i);
	printf("35.0x %35p<--\n\n", &i);

	ft_printf("035.0x %035.0d<--\n", i);
	printf("035.0x %035.0d<--\n\n", i);
	ft_printf("35.0x %-35.0d<--\n", i);
	printf("35.0x %-35.0d<--\n\n", i);
	ft_printf("35.0x %35.0d<--\n", i);
	printf("35.0x %35.0d<--\n\n", i);

	ft_printf("35.0x %035.0o<--\n", i);
	printf("35.0x %035.0o<--\n\n", i);
	ft_printf("35.0x %-35.0o<--\n", i);
	printf("35.0x %-35.0o<--\n\n", i);
	ft_printf("35.0x %35.0o<--\n", i);
	printf("35.0x %35.0o<--\n\n", i);

	ft_printf("#-35.0x %2.20s<--\n\n", s);
	printf("#-35.0x %2.20s<--\n\n", s);
	ft_printf("%20.25s$\n", NULL);
	printf("%20.25s$\n", NULL);
	ft_printf("%20.20s$\n", NULL);
	printf("%20.20s$\n", NULL);

	ft_printf("%20.18s$\n", NULL);
	printf("%20.18s$\n", NULL);
	ft_printf("%20.15s$\n", NULL);
	printf("%20.15s$\n", NULL);
	ft_printf("%20.11s$\n", NULL);
	printf("%20.11s$\n", NULL);

	ft_printf("%20.10s$\n", NULL);
	printf("%20.10s$\n", NULL);
	ft_printf("%20.6s$\n", NULL);
	printf("%20.6s$\n", NULL);
	ft_printf("%20.5s$\n", NULL);
	printf("%20.5s$\n", NULL);
	ft_printf("%20.0s$\n", s);
	printf("%20.0s$\n", s);

	ft_printf("%-20.10s$\n", s);
	printf("%-20.10s$\n", s);
	ft_printf("%-20.10s$\n", NULL);
	printf("%-20.10s$\n", NULL);
	ft_printf("%10.0x<--\n", -20);
	printf("%10.0x<--\n\n", -20);
	ft_printf("%10.0x<--\n", 0);
	printf("%10.0x<--\n\n", 0);

	ft_printf("* %35C<--\n\n", C);
	printf("* %35C<--\n\n", C);

	ft_printf("%#-10o\n", 42);
	printf("%#-10o\n", 42);
	ft_printf("%#lx\n", 9223372036854775807);
	printf("%#lx\n\n", 9223372036854775807);
    ft_printf("%000   %", "test");
	ft_printf("111%s333\n", NULL);
	ft_printf("%d\n", -42);
    ft_printf("%d\n\n", -42);
    ft_printf("%36s\n", "123456789123q");
    printf("%36s\n", "123456789123q");
    ft_printf("%25p\n", &i);
    printf("%25p\n", &i);
    ft_printf("%10.2s\n", "Hello");
    printf("%10.2s\n", "Hello");
    ft_printf("%+35.2d\n", i);
    printf("%+35.2d\n", i);
    ft_printf("%35.7d<--\n", i);
    printf("%35.7d<--\n", i);
    ft_printf("%010.7d<--\n", i);
    printf("%010.7d<--\n", i);
    ft_printf("T%%010d : %010.3d<--\n", i); ////////////////////////////////////
    printf("T%%010d : %010.3d<--\n", i);
    printf("===============================================\n");
    ft_printf("%-10.0o\n", data);
    printf("%-10.0o\n", data);
    printf("===============================================\n");
    ft_printf("%#10.2o\n", data);
    printf("%#10.2o\n", data);
    printf("===============================================\n");
    ft_printf("-->%#10.6x\n", data);
    printf("-->%#10.6x\n", data);

    ft_printf("%010o\n", data);
    printf("%010o\n", data);

    ft_printf("%03X\n", 3);
    printf("%03X\n", 3);
    printf("===============================================\n");
	printf("%s\n", "Timeout");
    // ft_printf(" ** %%%% |%+5.1d| |%10C| |%39S| OUI --> NON<--\n", data, C,  S);
    //    printf(" ** %%%% |%+5.1d| |%10C| |%39S| OUI --> NON:\n\n", data, C, S);

   // ft_printf(" 77 %%%% |%+5.1d| |%C| |%10.8s| OUI --> NON<--\n", data, C,  s);
   //     printf(" 77 %%%% |%+5.1d| |%C| |%10.8s| OUI --> NON:\n\n", data, C, s);

	// ft_printf("WORK %%%% |%-#25x| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
 //    printf("WORK %%%% |%-#25x| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

 //   ft_printf("%%%% |%-#35.6X| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
 //       printf("%%%% |%-#35.6X| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);
    ft_printf("\n");
    ft_printf("%010o\n", data);
    printf("%010o\n", data);
    ft_printf("111%lld333\n", data2);
    printf("111%lld333\n", data2);
    ft_printf("111%10s333\n", "222");
    printf("111%10s333\n", "222");
	ft_printf("%-10.0d<--\n", i);
    printf("%-10.0d<--\n\n", i);
	ft_printf("35.0x %35C<--\n\n", C);
	printf("35.0x %35C<--\n\n", C);

	ft_printf("#-35.0x %#-35.0x<--\n", i);
	printf("#-35.0x %#-35.0x<--\n\n", i);
	ft_printf("35.0x %035.0x<--\n", i);
	printf("35.0x %035.0x<--\n\n", i);
	ft_printf("-35.0x %-35.0x<--\n", i);
	printf("-35.0x %-35.0x<--\n\n", i);

	ft_printf("#-35.0x %#-35.0x<--\n", i);
	printf("#-35.0x %#-35.0x<--\n\n", i);
	ft_printf("#035.0x %#035.0x<--\n", i);//---------------
	printf("#035.0x %#035.0x<--\n\n", i);
	ft_printf("-35.0x %-35.0x<--\n", i);
	printf("-35.0x %-35.0x<--\n\n", i);
	ft_printf("#-35.0x %#-35.0x<--\n", i);
	printf("#-35.0x %#-35.0x<--\n\n", i);

	ft_printf("%#25x<--\n", i);
	printf("%#25x<--\n\n", i);
	ft_printf("%-U<--\n", i);
	printf("%-U<--\n\n", i);
	ft_printf("%10.0d<--\n", i);
    printf("%10.0d<--\n\n", i);
	ft_printf("%06d<--\n", i);
    printf("%06d<--\n\n", i);
	ft_printf("%08.0d<--\n", i);
    printf("%08.0d<--\n\n", i);
    ft_printf("%010.0d<--\n", i);
    printf("%010.0d<--\n\n", i);
    ft_printf("%010.1d<--\n", i);
    printf("%010.1d<--\n\n", i);
    ft_printf("%010.2d<--\n", i);
    printf("%010.2d<--\n\n", i);
    ft_printf("%010.3d<--\n", i);
    printf("%010.3d<--\n\n", i);
    ft_printf("%010.4d<--\n", i);
    printf("%010.4d<--\n\n", i);
    ft_printf("%010.9d<--\n", i);
    printf("%010.9d<--\n\n", i);
    ft_printf("%% %dwefew\n", 1);
	printf("%% %dwefew\n", 1);
	ft_printf("%d - %d\n", ft_printf("%% %% %% %% %%\n"), printf("%% %% %% %% %%\n"));
	printf("%d - %d\n", ft_printf("%% %% %% %% %%\n"), printf("%% %% %% %% %%\n"));
	ft_printf("%%\n");
    printf("%%\n");

	int y = 0;
	while (y < 5)
	{
		ft_printf("*** %% %d$\n", 25);
		printf("*** %% %d$\n\n", 25);
		y++;
	}
	y = 0;
	while (y < 5)
	{
		ft_printf("%% %d$\n", 25);
		printf("%% %d$\n\n", 25);
		y++;
	}
	y = 0;
	while (y < 5)
	{
		ft_printf("aaa%d$\n", 25);
		printf("aaa%d$\n\n", 25);
		y++;
	}
	y = 0;
	while (y < 5)
	{
		ft_printf("%d$\n", 25);
		printf("%d$\n\n", 25);
		y++;
	}

	ft_printf("%#6o\n", 2500);
	printf("%#6o\n", 2500);
	ft_printf("%#6x\n", 2500);
	printf("%#6x\n", 2500);
	ft_printf("%#5o\n", 2500);
	printf("%#5o\n", 2500);
	ft_printf("%#7o\n", 2500);
	printf("%#7o\n", 2500);
	ft_printf("%#8o\n", 2500);
	printf("%#8o\n", 2500);
	ft_printf("%#5x\n", 2500);
	printf("%#5x\n", 2500);
	ft_printf("%#2o\n", 2500);
	printf("%#2o\n", 2500);
	ft_printf("%#1o\n", 2500);
	printf("%#1o\n", 2500);
	ft_printf("%#0o\n", 2500);
	printf("%#0o\n", 2500);

	ft_printf("%#5x\n", 2500);
	printf("%#5x\n", 2500);
	ft_printf("%#7x\n", 2500);
	printf("%#7x\n", 2500);
	ft_printf("%#8x\n", 2500);
	printf("%#8x\n", 2500);

	ft_printf("%s\n", "2147483647");
   return (0);
   ft_printf("%Z", '*');
	printf("%10.2s333\n", "Hello");
	ft_printf("-%D%D%D\n", 10, 25, 30);
		printf("-%D%D%D\n\n",10, 25,30);


	ft_printf(" %%%% |%+5.1d| |%10C| |%39S| OUI --> NON<--\n", data, C,  S);
	   printf(" %%%% |%+5.1d| |%10C| |%39S| OUI --> NON:\n\n", data, C, S);

   ft_printf(" %%%% |%+5.1d| |%C| |%10.8s| OUI --> NON<--\n", data, C,  s);
       printf(" %%%% |%+5.1d| |%C| |%10.8s| OUI --> NON:\n\n", data, C, s);

    ft_printf(" %%%% |%+5d| |%C| |%-10s| OUI --> NON<--\n", data, C,  s);
    printf(" %%%% |%+5d| |%C| |%-10s| OUI --> NON:\n\n", data, C, s);

    ft_printf(" %%%% |%+5d| |%C| |%-10s| OUI --> NON<--\n", data, C,  s);
    printf(" %%%% |%+5d| |%C| |%-10s| OUI --> NON:\n\n", data, C, s);

    ft_printf(" %%%% |%+.1d| |%C| |%15s| OUI --> NON<--\n", data, C,  s);
    printf(" %%%% |%+.1d| |%C| |%15s| OUI --> NON:\n\n", data, C, s);

    ft_printf("WORK %%%% |%-#35.6X| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf("WORK %%%% |%-#35.6X| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf("WORK %%%% |%-#25x| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf("WORK %%%% |%-#25x| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf("WORK %%%% |%-#.6X| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf("WORK %%%% |%-#.6X| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf(" %%%% |%-.1X| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf(" %%%% |%-.1X| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf("--> %%%% |%25.2i| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf("--> %%%% |%25.2i| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf("--> %%%% |%10.2i| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf("--> %%%% |%10.2i| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf("--> %%%% |%10.4i| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf("--> %%%% |%10.4i| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf("--> %%%% |%10.6i| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf("--> %%%% |%10.6i| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

	ft_printf("--> %%%% |%10.8i| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf("--> %%%% |%10.8i| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf(" %%%% |%-o| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf(" %%%% |%-o| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf(" %%%% |%-25o| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf(" %%%% |%-25o| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf(" %%%% |%o| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf(" %%%% |%o| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

    ft_printf(" %%%% |%-.10o| |%C| |%20.2s| OUI --> NON<--\n", data, C,  s);
    printf(" %%%% |%-.10o| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);

	printf("-- %%%% |%-.10o| |%C| |%20.2s| OUI --> NON:\n\n", data, C, s);
	ft_printf("-- %%%% |%-.10o| |%C| |%20.2s| OUI --> NON<--\n", data);

	ft_printf("%#-08x", 42);
	printf("%#-08x", 42);

	ft_printf("\n%d ==>\n", ft_printf("null %c and text$\n", 0));
	printf("\n%d -->\n", printf("null %c and text$\n", 0));

	ft_printf("%");

	ft_printf("%-05o", 2500);
	printf("%-05o", 2500);

	ft_printf("% +d", 42);
	printf("% +d", 42);

	ft_printf("%+ d", 42);
	printf("%+ d", 42);

	ft_printf("%  +d", 42);
	printf("%  +d", 42);

	ft_printf("%+  d", 42);
	printf("%+  d", 42);

	ft_printf("% ++d", 42);
	printf("% ++d", 42);

	ft_printf("%+ d", 42);
	printf("%+ d", 42);

	ft_printf("%-05d", 42);
	printf("%-05d", 42);

	ft_printf("%-05d", -42);
	printf("%-05d", -42);

	ft_printf("%lld", -9223372036854775808);
	printf("%lld", -9223372036854775808);

	ft_printf("%lu", "-42");
	printf("%lu", "-42");

	ft_printf("%hU", "4294967296");
	printf("%hU", "4294967296");

	ft_printf("%U", "4294967296");
	printf("%U", "4294967296");

	ft_printf("%.2c", NULL);
	printf("%.2c", NULL);
	ft_printf("%#035.0x<--\n", 0);
	printf("%#035.0x<--\n\n", 0);
	ft_printf("%#-35.0x<--\n", 0);
	printf("%#-35.0x<--\n\n", 0);
	ft_printf("%#35.0x<--\n", 0);
	printf("%#35.0x<--\n\n", 0);
	ft_printf("%035.0x<--\n", 0);
	printf("%035.0x<--\n\n", 0);
	ft_printf("%035.0x<--\n", 0);
	printf("%035.0x<--\n\n", 0);
	ft_printf("%35.0x<--\n", 0);
	printf("%35.0x<--\n\n", 0);
	ft_printf("%-35.0x<--\n", 0);
	printf("%-35.0x<--\n\n", 0);

	ft_printf("#035.0o %#035.0o<--\n", 0);
	printf("#035.0o %#035.0o<--\n\n", 0);
	ft_printf("#-35.0o: %#-35.0o<--\n", 0);
	printf("#-35.0o: %#-35.0o<--\n\n", 0);
	ft_printf("#35.0o: %#35.0o<--\n", 0);
	printf("#35.0o: %#35.0o<--\n\n", 0);
	ft_printf("%035.0o<--\n", 0);
	printf("%035.0o<--\n\n", 0);
	ft_printf("%035.0o<--\n", 0);
	printf("%035.0o<--\n\n", 0);
	ft_printf("%35.0o<--\n", 0);
	printf("%35.0o<--\n\n", 0);
	ft_printf("%-35.0o<--\n", 0);
	printf("%-35.0o<--\n\n", 0);

	ft_printf("#035.0o %035.0d<--\n", 0);
	printf("#035.0o %035.0d<--\n\n", 0);
	ft_printf("#-35.0o: %-35.0d<--\n", 0);
	printf("#-35.0o: %-35.0d<--\n\n", 0);
	ft_printf("%035.0d<--\n", 0);
	printf("%035.0d<--\n\n", 0);
	ft_printf("%035.0d<--\n", 0);
	printf("%035.0d<--\n\n", 0);
	ft_printf("%35.0d<--\n", 0);
	printf("%35.0d<--\n\n", 0);
	ft_printf("%-35.0d<--\n", 0);
	printf("%-35.0d<--\n\n", 0);

	ft_printf("#035.0x %#035.1x<--\n", 0);//-----------------
	printf("#035.0x %#035.1x<--\n\n", 0);
	ft_printf("#035.0x %#035.0x<--\n", 1);//-----------------
	printf("#035.0x %#035.0x<--\n\n", 1);
	ft_printf("#035.0x %#035.1x<--\n", 1);//-----------------
	printf("#035.0x %#035.1x<--\n\n", 1);
#include <limits.h>
	printf("include limits.h\n");
	ft_printf("%lO\n", LONG_MAX);
	ft_printf("{%3c}$\n", 0);
	printf("%lO\n", LONG_MAX);
	printf("{%3c}$\n", 0);

	ft_printf("%d %d\n", 10, 25);
	printf("%d %d\n", 10, 25);

	ft_printf("%c\n", 0);
	printf("%c\n", 0);

	ft_printf("%C\n", 0);
	printf("%C\n", 0);

	ft_printf(">%d\n", ft_printf("%c", -1));
	printf(">%d\n", printf("%c", -1));

	ft_printf("%10.2d<--\n", 20);
	printf("%10.2d<--\n\n", 20);
	ft_printf("%10.2d<--\n", -20);
	printf("%10.2d<--\n\n", -20);

	ft_printf("%10d<--\n", -20);
	printf("%10d<--\n\n", -20);
	ft_printf("%#10.20X %#10.20X %#10.20X\n", 1, 25, 42);
	ft_printf("%#10.20X %#10.20X\n", 1, 25, 42);
	ft_printf("%#10.20X %#10.20X %#10.20X\n", 25, 42);

	ft_printf("%C\n", 1048573);
	printf("%C\n", 1048573);

	ft_printf("==INT==\n");
	ft_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	ft_printf("==LLONG==\n");
	ft_printf("%lld\n", LLONG_MIN);
	printf("%lld\n", LLONG_MIN);
	ft_printf("%lld\n", LLONG_MAX);
	printf("%lld\n", LLONG_MAX);
	ft_printf("==LONG==\n");
	ft_printf("%ld\n", LONG_MIN);
	printf("%ld\n", LONG_MIN);
	ft_printf("%ld\n", LONG_MAX);
	printf("%ld\n", LONG_MAX);
	ft_printf("==SHRT==\n");
	ft_printf("%d\n", SHRT_MIN);
	printf("%d\n", SHRT_MIN);
	ft_printf("%d\n", SHRT_MAX);
	printf("%d\n", SHRT_MAX);
	ft_printf("==SSIZE==\n");
	ft_printf("%ld\n", SSIZE_MAX);
	printf("%ld\n", SSIZE_MAX);
	ft_printf("==UINT==\n");
	ft_printf("%u\n", UINT_MAX);
	printf("%u\n", UINT_MAX);
	ft_printf("==U___==\n");
	ft_printf("%u\n", UINT_MAX - 150);
	printf("%u\n", UINT_MAX - 150);
	ft_printf("==ULLONG==\n");
	ft_printf("%llu\n", ULLONG_MAX);
	printf("%llu\n", ULLONG_MAX);
	ft_printf("==ULONG==\n");
	ft_printf("%lu\n", ULONG_MAX);
	printf("%lu\n", ULONG_MAX);
	ft_printf("==ULONG==\n");
	ft_printf("%lu\n", ULONG_MAX);
	printf("%lu\n", ULONG_MAX);
	ft_printf("==USHRT==\n");
	ft_printf("%i\n", USHRT_MAX);
	printf("%i\n", USHRT_MAX);
	ft_printf("==JJJJ==\n");
	ft_printf("%jd\n", LONG_MIN);
	printf("%jd\n", LONG_MIN);
	ft_printf("==ULONG==\n");
	ft_printf("%llu\n", ULLONG_MAX);
	printf("%llu\n", ULLONG_MAX);
	ft_printf("%jd\n", LONG_MIN - 1);
	printf("%jd\n", LONG_MIN - 1);
	ft_printf("%jd\n", LONG_MAX);
	printf("%jd\n", LONG_MAX);

	ft_printf("#035.0o %#35.0o<--\n", 0);
	printf("#035.0o %#35.0o<--\n", 0);
	ft_printf("#035.0o %#035.0o<--\n", 0);
	printf("#035.0o %#035.0o<--\n", 0);
	ft_printf("#035.0o %35.0o<--\n", 0);
	printf("#035.0o %35.0o<--\n", 0);
	ft_printf("#035.0o %#035.1o<--\n", 0);
	printf("#035.0o %#035.1o<--\n", 0);
	ft_printf("#035.0o %#035.o<--\n", 1);
	printf("#035.0o %#035.o<--\n", 1);
//	while (105){}

    return (0);
}
