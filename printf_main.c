/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-gal <vle-gal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:09:12 by vle-gal           #+#    #+#             */
/*   Updated: 2018/01/19 17:26:54 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main(void)
{
  // ft_printf("% 10.5d\n", 4242);
  // printf("% 10.5d", 4242);
	// ft_printf("%d\n", 2147);
	// printf("--%20d\n", 2147483);
	// ft_printf("%d\n", -2147483648);
	// ft_printf("%10xlol\n", 123);
	// ft_printf("%d\n", -123);
	// printf("%s\n");
	// if (printf("%c\n", 'a') == ft_printf("%c\n", 'a'))
	// 	printf("%d\n", 1);
	// int i;
	// i = -3647;
	// while ((printf("%zd\n", i) == ft_printf("%zd\n", i)) && i < 5)
	// 	{
	// 	i++;
	// 	}
	// 	printf("\n");
	// 	if (printf("%zd", i) != ft_printf("%zd", i))
	// 		printf("%zd", i);
	// ft_printf("%zd\n", -1);
	// printf("%zd\n", -1);
	// if (ft_printf("%zd\n", -1) != printf("%zd\n", -1))
	// 	printf("%s", "faux");
	printf("--------\n");
  // ft_printf("%1.2s", "ds");
	printf("\n--------\n");
  printf("\n");

// ft_printf("%lo\n", -10000000000);
// printf("%lo\n", -10000000000);
ft_printf("|%10p|\n", (void*)'a');
printf("|%10p|\n", (void*)'a');
// 1777777777665375016000
// 7777777777777777777777
// 9223372036854775807
// 18446744073709551616
// 00000000010000000000
// 	printf("52Kashim a 1751 histoires à raconterIl fait au moins 377777603000\
// 017777777777200000000001777777777720000000000 %o 0000042\n", 344534);
//
// 	ft_printf("52Kashim a 1751 histoires à raconterIl fait au moins 37777760300\
// 0017777777777200000000001777777777720000000000 %o 0000042\n", 344534);
// 	unsigned char a;
// 	a = 131;
// 	printf("a =%hhu a =%zu\n",a, a );
// 	ft_printf("a =%hhu a =%zu\n",a, a );
// 	printf("%o\n", 9);
// 	ft_printf("%o\n", 9);
// % 4i 42 == |   42|
// % 4i 42 == |  42|
// 	printf("%p\n", 29905616);
// 	ft_printf("%-p\n", 29905616);
//
// 	printf("% 04.5d\n", 42);
// 	ft_printf("% 04.5d\n", 42);
//
// 	printf("a =%hhu b=%zu  c=%d\n ",a, a, 42 );
// 	ft_printf("a =%hd b=%ld  c=%d\n",100, 150, 42 );
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("%$%1s\n");
  // printf("%L%1s\n", 42);
  // printf("%'%1s\n", 42);
  // printf("%%1s\n", 42);
	return(0);
}
