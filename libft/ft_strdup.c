/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:21:49 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/07 16:29:18 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*s_cpy;

	i = 0;
	len = ft_strlen(s1);
	s_cpy = malloc(len * sizeof(char) + 1);
	if (!s_cpy)
		return (0);
	while (i <= len && s1[i])
	{
		s_cpy[i] = s1[i];
		i++;
	}
	s_cpy[i] = 0;
	return (s_cpy);
}
