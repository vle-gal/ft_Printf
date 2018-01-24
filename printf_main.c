/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-gal <vle-gal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:09:12 by vle-gal           #+#    #+#             */
/*   Updated: 2018/01/24 16:33:42 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	printf("--------\n");
	printf("\n--------\n");
	printf("\n");
	printf("%i\n", -2147483648);
	ft_printf("%i\n", -2147483648);
	return (0);
}
