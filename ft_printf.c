/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:05:21 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/14 17:21:19 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*int	ft_type_in(int c, va_list *ap)
{
	int		i;
	char	*type;
	t_input	*tab;
	int		res;

	i = 0;
	type = "cspdiuxX"
	while (type[i])
	{
		if (type[i] == c)
			res = tab->tab_ptr[i];
		i++;
	}
	return (res)
}*/

int	check_type(char c, va_list ap)
{
	
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		res;

	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			res += ft_type_in(str[i], &ap);
		}
		else
		{
			ft_putchar(*str);
			res += 1;
		i++;
	}
	va_end(ap);
	return (res);
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;

	ft_printf("Salut, j'ai %d ans", 13);
	return (0);
}
