/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:02:02 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/02 15:25:54 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len_max;
	size_t		i;
	size_t		j;
	char		*str;

	len_max = ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	str = ft_calloc(len_max, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] && j < len_max)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] && j < len_max)
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	return (str);
}

/*int	main (int argc, char **argv)
{
	(void) argc;
	{
		char *str1 = argv[1];
		char *str2 = argv[2];
		char *ret = ft_strjoin(str1, str2);
		printf("%s", ret);
	}
}*/
