/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:03:40 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/15 09:50:48 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_d(int nb, int res)
{
	if (nb == -2147483648)
	{
		ft_print_s("-2147483648");
		res = 11;
	}
	else if (nb < 0)
	{
		ft_print_c('-');
		nb = -nb;
		res += 1;
	}
	else if (nb > 9)
	{
		ft_print_d(nb / 10, res);
		ft_print_c(nb % 10 + '0');
		res += 1;
	}
	else if (0 <= nb && nb < 10)
	{
		ft_print_c(nb + '0');
		res += 1;
	}
	return (res);
}

/*int	main()
{
	ft_putnbr(20000);
	return (0);
}*/
