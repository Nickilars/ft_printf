/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:03:40 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 15:43:58 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int nb)
{
	int		ret;

	ret = 0;
	if (nb == -2147483648)
		ret += ft_print_s("-2147483648");
	else if (nb < 0)
	{
		ret += ft_print_c('-');
		ret += ft_print_d(-nb);
	}
	else if (nb > 9)
	{
		ret += ft_print_d(nb / 10);
		ret += ft_print_c((nb % 10) + '0');
	}
	else if (0 <= nb && nb < 10)
		ret += ft_print_c(nb + '0');
	return (ret);
}

/*int	main()
{
	ft_putnbr(20000);
	return (0);
}*/
