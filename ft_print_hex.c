/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <nrossel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:42:44 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/16 16:23:07 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*------------------- Len_nb ----------------------*/

int	ft_len_nb(unsigned long nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

/*------------------- x ----------------------*/

void	ft_lowchar(unsigned long nb, char *str)
{
	int		i;
	char	*base;

	i = ft_len_nb(nb) - 1;
	base = "0123456789abcdef";
	while (i >= 0)
	{
		str[i--] = base[nb % 16];
		nb /= 16;
	}
}
/* ------------------- X ------------------------*/

void	ft_upperchar(unsigned long nb, char *str)
{
	int		i;
	char	*base;

	i = ft_len_nb(nb) - 1;
	base = "0123456789ABCDEF";
	while (i >= 0)
	{
		str[i--] = base[nb % 16];
		nb /= 16;
	}
}

/*------------------- Print_hexa --------------------*/

int	ft_print_hex(unsigned long nb, char c)
{
	char			*str;

	if (nb == 0)
	{
		ft_print_c('0');
		return (1);
	}
	str = ft_calloc((ft_len_nb(nb) + 1), sizeof(char));
	if (!str)
		return (0);
	str[ft_len_nb(nb)] = 0;
	if (c == 'x')
		ft_lowchar(nb, str);
	else
		ft_upperchar(nb, str);
	ft_print_s(str);
	free(str);
	return (ft_len_nb(nb));
}

/*int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	unsigned long	nb = 25795;
	char			c = 'X';
	int	retour = ft_print_hex(nb, c);
	ft_printf("\n");
	ft_printf("%d", retour);
	return (0);
}
*/
