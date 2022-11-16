/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:00:12 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 11:19:04 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_u(unsigned int nb, int ret)
{
    if (nb > 9)
    {
        ft_print_u(nb / 10, ret);
        ret += ft_print_c(nb % 10 + '0');
    }
    else
        ret += ft_print_c(nb % 10 + '0');
    return (ret);
}