/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:05:21 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 15:37:41 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*------------------------- Type_in -------------------------------*/

int	ft_type_in(int c, va_list arg)
{
	int		ret;

	ret = 0;
	if (c == 'c')
		ret += ft_print_c(va_arg(arg, int));
	else if (c == 's')
		ret += ft_print_s(va_arg(arg, char *));
	else if (c == 'p')
		ret += ft_print_p(va_arg(arg, unsigned long));
	else if (c == 'd')
		ret += ft_print_d(va_arg(arg, int));
	else if (c == 'i')
		ret += ft_print_d(va_arg(arg, int));
	else if (c == 'u')
		ret += ft_print_u(va_arg(arg, unsigned int));
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
			if (str[++i] == '%')
				ret += ft_print_c('%');
			else
				ret += ft_type_in(str[i], arg);
		}
		else
			ret += ft_print_c(str[i]);
		i++;
	}
	va_end(arg);
	return (ret);
}

/*int	main()
{
	int ret = 0;
	ret = ft_printf(" NULL %s NULL ", NULL);
	ft_printf("%d", ret);
	return (0);
}*/