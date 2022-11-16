/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:42:58 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 16:21:25 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long nb)
{
	int	ret;

	ret = 0;
	ret += ft_print_s("0x");
	if (nb == 0)
		ret += ft_print_c('0');
	else
		ret += ft_print_hex(nb, 'x');
	return (ret);
}
