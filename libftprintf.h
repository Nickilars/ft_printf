/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:09:48 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/14 17:24:57 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>

i/*typedef int		*t_input
{
	t_input		tab_ptr[9];
	tab_ptr[0] = &ft_print_c(va_arg, char);
	tab_ptr[1] = &ft_print_s;
	tab_ptr[2] = &ft_print_p;
	tab_ptr[3] = &ft_print_d;
	tab_ptr[4] = &ft_print_d;
	tab_ptr[5] = &ft_print_u;
	tab_ptr[6] = &ft_print_x;
	tab_ptr[7] = &ft_print_X;
};*/

int	ft_printf(const char *, ...);

int		ft_print_c(char c);
int		ft_print_s(const char *str);
int		ft_print_d(int nb);

#endif
