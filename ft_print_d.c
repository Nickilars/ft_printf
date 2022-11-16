/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:03:40 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 14:41:11 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int nb)
{
	int		ret;
	long	nbr;

	nbr = nb;
	ret = 0;
	if (nbr < 0)
	{
		ret += ft_print_c('-');
		ret += ft_print_d(-nbr);
	}
	else if (nbr > 9)
	{
		ret += ft_print_d(nbr / 10);
		ret += ft_print_c((nbr % 10) + '0');
	}
	else if (0 <= nbr && nbr < 10)
		ret += ft_print_c(nbr + '0');
	return (ret);
}

/*int	main()
{
	ft_putnbr(20000);
	return (0);
}*/
