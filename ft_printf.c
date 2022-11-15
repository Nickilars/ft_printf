/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:05:21 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/15 17:42:28 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
/*------------------------- Type_in -------------------------------*/

int	ft_type_in(int c, va_list arg)
{
/*	int		i;
	char	*type;
*/
	int		res;

/*	i = 0;
	type = "cspdiuxX";
	while (type[i])
	{
		if (type[i] == c)
			res += tab[i];
		i++;
	}
*/
	res = 0;
	if (c == 'c')
		res += ft_print_c(va_arg(arg, int));
	else if(c == 's')
		res += ft_print_s(va_arg(arg, char*));
	else if (c == 'p')
		res += ft_print_p(va_arg(arg, unsigned long));
	else if (c == 'd')
		res += ft_print_d(va_arg(arg, int), 0);
	else if (c == 'i')
		res += ft_print_d(va_arg(arg, int), 0);
	else if (c == 'u')
		res += ft_print_u(va_arg(arg, unsigned int), 0);
	else if (c == 'x')
		res += ft_print_exa(va_arg(arg, unsigned int), c);
	else if (c == 'X')
		res += ft_print_exa(va_arg(arg, unsigned int), c);  
	return (res);
}
/*-------------------------- ft_printf -----------------------------*/

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;
	int		res;

	i = 0;
	res = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				res += ft_print_c('%');
			else
				res += ft_type_in(str[i], arg);
		}
		else
		{
			ft_print_c(str[i]);
			res += 1;
		i++;
		}
	}
	va_end(arg);
	return (res);
}
/*--------------------- Main ---------------------------------*/

#include <stdio.h>

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;

	ft_printf("Salut, j'ai %d ans", 13);
	printf("%p", ptr);
	return (0);
}
