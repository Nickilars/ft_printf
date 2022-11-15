/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:09:48 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/15 17:42:14 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
//# include "libft.h"

/*typedef struct t_input	t_input;
struct  t_input
{
	t_list	tab_print[7] = (&ft_print_c(va_arg(arg, char)),
							&ft_print_s(va_arg(arg, char*)),
							&ft_print_p(va_arg(arg, unsigned int)),
							&ft_print_d(va_arg(arg, int)),
							&ft_print_d(va_arg(arg, int)),
							&ft_print_u(va_arg(arg, unsigned int)),
							&ft_print_x(va_arg(arg, unsigned int)),
							&ft_print_X(va_arg(arg, unsigned int)))
};*/

int	ft_printf(const char *, ...);

int		ft_print_c(char c);
int		ft_print_s(const char *str);
int		ft_print_d(int nb, int res);
//int		ft_print_p(unsigned int nb);
//int		ft_print_u(unsigned int nb, int);
int		ft_print_hex(unsigned long nb, char c);
#endif
