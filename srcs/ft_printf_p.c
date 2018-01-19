/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 08:14:09 by anonymou          #+#    #+#             */
/*   Updated: 2018/01/19 17:28:26 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// static int		ft_unsigned_longlen(unsigned long lu)
// {
// 	int		len;
//
// 	len = 1;
// 	while (lu > 9)
// 	{
// 		len++;
// 		lu /= 10;
// 	}
// 	// printf("-%d\n", len);
// 	return (len);
// }
//
// static char		*ft_putaddrr(void *p)
// {
// 	unsigned long	adr;
// 	char const		*base;
// 	char			*res;
// 	int				i;
//
// 	res = ft_strnew(14);
// 	adr = (unsigned long)p;
// 	base = "0123456789abcdef";
// 	ft_unsigned_longlen(adr) == 15 ? i = 11 : 0;
// 	// ft_unsigned_longlen(adr) == 8 ? i = 6 : 0;
// 	ft_unsigned_longlen(adr) != 15 ? i = 5 : 0;
// 	while ((adr / 16) > 0 || i >= 11)
// 	{
// 		res[i + 2] = base[(adr % 16)];
// 		adr /= 16;
// 		i--;
// 		// printf("%d\n", i);
// 	}
// 	// printf("%c\n", base[(adr % 16)]);
// 	res[i + 2] = base[(adr % 16)];
// 	// printf("%c\n", res[i + 2]);
// 	// printf("%d\n", i);
// 	res[0] = ('0');
// 	res[1] = ('x');
// 	// printf("%s\n", res);
// 	p == NULL ? res[2] = ('0') : 0;
// 	return (res);
// }

static char		*ft_putaddrr(long long int p)
{
	char const		*base;
	long long tmp;
	int i;
	char *str;

	base = "0123456789abcdef";
	p < 0 ? p -= 4294967296 : 0;
	tmp = p;
	i = 3;
	while (p >= 16)
	{
		p /= 16;
		i++;
	}
	str = ft_strnew(i);
	p = tmp;
	p > 0 ? str[i--] = 0 : 0;
	p == 0 ? str[i] = 0: 0;
	p == 0 ? str[--i] = '0': 0;
	while (p > 0)
	{
		tmp = p & binaire_Hex;
		str[i--] = base[(tmp % 16)];
		p >>= 4;
	}
	str[i--] = 'x';
	str[i] = '0';
	return (str);
}


void			ft_p(t_struct *para, char *p)
{
	int len;
	int len_less;

	len = ft_strlen(p);
	if (para->nbr != '\0')
		p = ft_flags_height(p, len, para);
	len_less = ft_strlen(p);
	para->res = ft_strlen(p) + para->res;
	ft_putstr(p);
	free(p);
}

void			ft_p_main(t_struct *para, va_list args)
{
	char	*p;

	if (para->f_one == '\0')
	{
		p = ft_putaddrr(va_arg(args, long long int));
		ft_p(para, p);
	}
}
