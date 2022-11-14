/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:05:03 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/01 10:47:59 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		src_len;
	size_t		i;

	src_len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (!dstsize)
		return (src_len);
	i = 0;
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize < src_len)
		dst[dstsize - 1] = 0;
	else if (dstsize != 0)
		dst[i] = 0;
	return (src_len);
}
