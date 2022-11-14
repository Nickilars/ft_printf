/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:03:40 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/14 17:24:51 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_d(int nb, int res)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		res = 11;
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		rest += 1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
		res += 1
	}
	else if (0 <= nb && nb < 10)
	{
		ft_putchar(nb + '0');
		res += 1;
	}
	return (res);
}

/*int	main()
{
	ft_putnbr(20000);
	return (0);
}*/
