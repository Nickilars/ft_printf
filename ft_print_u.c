/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:00:12 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 14:25:05 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int				ret;
	unsigned long	nbr;

	ret = 0;
	nbr = nb;
	if (nb > 9)
	{
		ret += ft_print_u(nb / 10);
		ret += ft_print_c(nb % 10 + '0');
	}
	else
		ret += ft_print_c(nb % 10 + '0');
	return (ret);
}
