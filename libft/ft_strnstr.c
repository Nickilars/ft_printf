/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:57:36 by nrossel           #+#    #+#             */
/*   Updated: 2022/10/31 11:21:39 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && (i + j) < len)
			{
				if (needle[j + 1] == 0)
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
