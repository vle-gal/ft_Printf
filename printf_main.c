/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-gal <vle-gal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:09:12 by vle-gal           #+#    #+#             */
/*   Updated: 2018/01/24 11:44:19 by vle-gal          ###   ########.fr       */
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
	a = 42;
	ft_printf("%lu\n", a);
	printf("%lu", a);
	return (0);
}
