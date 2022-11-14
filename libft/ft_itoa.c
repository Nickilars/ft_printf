/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:04:26 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/04 10:29:15 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_len(long long int n)
{
	long long int	i;

	i = 1;
	if (n < 0)
		n = n * -1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
/*---------------------------------------------------*/

static char	*insert_nb(char *str, long long int n, int len)
{
	int		start;

	str[len] = '\0';
	len = len - 1;
	if (n < 0)
	{
		n = n * -1;
		start = 1;
		str[0] = '-';
	}
	else
		start = 0;
	while (len >= start)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
/*-----------------------------------------------*/

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	long long int	nb;

	nb = n;
	len = str_len(nb);
	if (nb < 0)
		len = len + 1;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = insert_nb(str, nb, len);
	return (str);
}
/*--------------   Test War-Machine -----------------*/
/*static void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	int		arg;

	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char *res = ft_itoa(0);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 2)
	{
		char *res = ft_itoa(1);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 3)
	{
		char *res = ft_itoa(-9);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 4)
	{
		char *res = ft_itoa(10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 5)
	{
		char *res = ft_itoa(-10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 6)
	{
		char *res = ft_itoa(8124);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 7)
	{
		char *res = ft_itoa(-9874);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 8)
	{
		char *res = ft_itoa(543000);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 9)
	{
		char *res = ft_itoa(-2147483648LL);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 10)
	{
		char *res = ft_itoa(2147483647);
		ft_print_result(res);
		free(res);
	}
	return (0);
}*/
