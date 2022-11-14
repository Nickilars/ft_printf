/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:29:27 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/09 14:47:33 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*------------ My Split ------------------*/

/*static int	len_tabstr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i);
}

static int	nb_char(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc((nb_char(s, c) + 1) * sizeof(char));
	if (!tab || !s)
		return (NULL);
	tab[nb_char(s, c) + 1] = 0;
	while (s[i])
	{
		if (i == 0 || k == 0)
			tab[j] = malloc((len_tabstr((char *)&s[i], c) + 1) * sizeof(char *));
		if (s[i] == c)
		{
			tab[j][k] = 0;
			j++;
			k = 0;
			i++;
		}
		else
			tab[j][k++] = s[i++];
	}
	tab[j][k] = 0;
	return (tab);
}*/
/*------------------ Split github ----------------------*/

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s)
		return (0);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
