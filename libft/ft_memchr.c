/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:28:07 by nrossel           #+#    #+#             */
/*   Updated: 2022/10/31 13:48:15 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	i = 0;
	p = (const char *) s;
	while (i < n)
	{
		if (p[i] == (char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
