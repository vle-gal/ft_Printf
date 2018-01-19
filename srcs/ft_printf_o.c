/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:40:46 by anonymou          #+#    #+#             */
/*   Updated: 2018/01/19 17:24:49 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

	static char		*ft_ostr(long p)
	{
		long tmp;
		int i;
		char *str;

		p < 0 ? p -= 4294967296 : 0;
		tmp = p;
		i = 1;
		while (p >= 9)
		{
			p /= 8;
			i++;
		}
		str = ft_strnew(i);
		p = tmp;
		p > 0 ? str[i--] = 0 : 0;
		p == 0 ? str[i] = 0: 0;
		p == 0 ? str[--i] = '0': 0;
		while (p > 0)
		{
			tmp = p & binaire_octal;
			str[i--] = tmp + '0';
			p >>= 3;
		}
		return (str);
	}

// static char		*ft_ostr(int p)
// {
// 	unsigned long	adr;
// 	char const		*base;
// 	char			*res;
// 	int				i;
//
// 	adr = (unsigned long)p;
// 	i = 0;
// 	while (p >= 9)
// 	{
// 		p /= 10;
// 		i++;
// 	}
// 	res = ft_strnew(i + 1);
// 	base = "01234567";
// 	while ((adr / 8) > 0 || i > 1)
// 	{
// 		res[i] = base[(adr % 8)];
// 		adr /= 8;
// 		i--;
// 	}
// 	res[0] = base[(adr % 8)];
//
// 	return (res);
// }

static char		*ft_ostrl(long p)
{
	unsigned long tmp;
	int i;
	char *str;

	p < 0 ? p -= 4294967296 : 0;
	tmp = p;
	i = 1;
	while (p >= 9)
	{
		p /= 8;
		i++;
	}
	// printf("%d\n", i);
	str = ft_strnew(i);
	p = tmp;
	p > 0 ? str[i--] = 0 : 0;
		p == 0 ? str[i] = 0 : 0;
		p == 0 ? str[--i] = '0': 0;
	while (p > 0)
	{
	// printf("-i =%d, tmp =%d, p =%d, binaire_octal =%d\n", i, tmp, p, binaire_octal);
	tmp = p & binaire_octal;
	// printf("%d\n", tmp);
	str[i--] = tmp + '0';
	// printf("|%c|\n", str[i - 1]);
	p >>= 3;
	}
	// printf("%d\n", i);
	// printf("%s\n", str);
	return (str);
}

static char		*ft_ostrll(long long p)
{
	long long tmp;
	int i;
	char *str;

	p < 0 ? p -= 4294967296 : 0;
	tmp = p;
	i = 1;
	while (p >= 9)
	{
		p /= 8;
		i++;
	}
	// printf("%d\n", i);
	str = ft_strnew(i);
	p = tmp;
	p > 0 ?str[i--] = 0 : 0;
		p == 0 ? str[i] = 0: 0;
		p == 0 ? str[--i] = '0': 0;
	while (p > 0)
	{
	// printf("-i =%d, tmp =%d, p =%d, binaire_octal =%d\n", i, tmp, p, binaire_octal);
	tmp = p & binaire_octal;
	// printf("%d\n", tmp);
	str[i--] = tmp + '0';
	// printf("|%c|\n", str[i - 1]);
	p >>= 3;
	}
	// printf("%d\n", i);
	// printf("%s\n", str);
	return (str);
}

static char		*ft_ostrh(short p)
{
	int tmp;
	int i;
	char *str;

	tmp = p;
	i = 1;
	while (p >= 9)
	{
		p /= 8;
		i++;
	}
	// printf("%d\n", i);
	str = ft_strnew(i);
	p = tmp;
	p > 0 ? str[i--] = 0 : 0;
		p == 0 ? str[i] = 0: 0;
		p == 0 ? str[--i] = '0': 0;
	while (p > 0)
	{
	// printf("-i =%d, tmp =%d, p =%d, binaire_octal =%d\n", i, tmp, p, binaire_octal);
	tmp = p & binaire_octal;
	// printf("%d\n", tmp);
	str[i--] = tmp + '0';
	// printf("|%c|\n", str[i - 1]);
	p >>= 3;
	}
	// printf("%d\n", i);
	// printf("%s\n", str);
	return (str);
}

void			ft_o_main(t_struct *para, va_list args)
{
	char	*o;

	para->f_one == '\0' ? o = ft_ostr(va_arg(args, int)) : 0;
	if (para->f_one == 'l')
	{
		para->f_two == '\0' ? o = ft_ostrl(va_arg(args, long)) : 0;
		para->f_two == 'l' ? o = ft_ostrll(va_arg(args, long long)) : 0;
	}
	if (para->f_one == 'h')
	{
		para->f_two == '\0' ? o = ft_ostrh((short)va_arg(args, int)) : 0;
		para->f_two == 'h' ? o = ft_ostrhh((char)va_arg(args, int)) : 0;
	}
	para->f_one == 'j' ? o = ft_ostrll(va_arg(args, long long)) : 0;
	para->f_one == 'z' ? o = ft_ostrl(va_arg(args, long)) : 0;
	para->d_ == 0 && o[0] == '0' ? o[0] = '0' : 0;
	para->h_ == 1 ? ft_ohtag(para, o) : ft_o_draw(para, o);
}
