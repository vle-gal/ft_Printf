/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-gal <vle-gal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:09:12 by vle-gal           #+#    #+#             */
/*   Updated: 2018/01/19 11:08:18 by vle-gal          ###   ########.fr       */
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

	printf("42Kashim a 1001 histoires à raconterIl fait au moins -8000 \
	002147483647-21474836482147483647-2147483648%i 0000042\n", 34);

	ft_printf("42Kashim a 1001 histoires à raconterIl fait au moins -8000 \
	002147483647-21474836482147483647-2147483648%i 0000042\n", 34);
	unsigned char a;
	a = 131;
	printf("a =%d a =%zu\n",a, sizeof(a) );
	ft_printf("a =%d a =%zu\n",a, sizeof(a) );

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
