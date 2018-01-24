/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-gal <vle-gal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:09:12 by vle-gal           #+#    #+#             */
/*   Updated: 2018/01/24 14:17:02 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	unsigned long a;

	printf("--------\n");
	printf("\n--------\n");
	printf("\n");
	a = 2147483647;
	printf("%lu\n", a);
	ft_printf("%lu\n", a);
	return (0);
}
