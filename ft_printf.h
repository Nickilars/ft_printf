/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:09:48 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 14:11:12 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "libft/libft.h"

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
int		ft_print_c(char c);
int		ft_print_s(const char *str);
int		ft_print_d(int nb);
int		ft_print_p(unsigned long nb);
int		ft_print_u(unsigned int nb);
int		ft_print_hex(unsigned long nb, char c);
int		ft_printf(const char *str, ...);
#endif
