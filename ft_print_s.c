/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:58:34 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 14:41:13 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(const char *str)
{
	int	i;

	i = 0;
	if (!str || !*str)
		return (0);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/*int	main(int ac, char **av)
{
	(void) ac;
	ft_putstr(av[1]);
	return (0);
}*/
