/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:05:21 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 11:26:28 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
/*------------------------- Type_in -------------------------------*/

int	ft_type_in(int c, va_list arg)
{
/*	int		i;
	char	*type;
*/
	int		ret;

/*	i = 0;
	type = "cspdiuxX";
	while (type[i])
	{
		if (type[i] == c)
			ret += tab[i];
		i++;
	}
*/
	ret = 0;
	if (c == 'c')
		ret += ft_print_c(va_arg(arg, int));
	else if(c == 's')
		ret += ft_print_s(va_arg(arg, char*));
	else if (c == 'p')
		ret += ft_print_p(va_arg(arg, unsigned long));
	else if (c == 'd')
		ret += ft_print_d(va_arg(arg, int), 0);
	else if (c == 'i')
		ret += ft_print_d(va_arg(arg, int), 0);
	else if (c == 'u')
		ret += ft_print_u(va_arg(arg, unsigned int), 0);
	else if (c == 'x')
		ret += ft_print_hex(va_arg(arg, unsigned int), c);
	else if (c == 'X')
		ret += ft_print_hex(va_arg(arg, unsigned int), c);  
	return (ret);
}
/*-------------------------- ft_printf -----------------------------*/

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;
	int		ret;

	i = 0;
	ret = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				ret += ft_print_c('%');
			else
				ret += ft_type_in(str[i], arg);
			i++;
		}
		else
		{
			ft_print_c(str[i]);
			ret += 1;
			i++;
		}
	}
	va_end(arg);
	return (ret);
}
/*--------------------- Main ---------------------------------*/

/*#include <stdio.h>

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;

	ft_printf("Salut, j'ai %d ans", 13);
	printf("%p", ptr);
	return (0);
}*/
