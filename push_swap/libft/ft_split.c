/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:25:59 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/30 19:03:11 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	total_words(char const *s1, char c)
{
	int		n;
	int		j;

	n = 0;
	j = 0;
	while (s1[n])
	{
		if (s1[n] != c)
			j++;
		while (s1[n + 1] && s1[n] != c)
			n++;
		n++;
	}
	return (j);
}

int	len_of_word(const char *str, char c)
{
	int		word;
	int		i;

	i = 0;
	word = 0;
	while (str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		word++;
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		n;
	int		j;

	i = 0;
	n = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (1 + total_words(s, c)));
	if (!s || !(str))
		return (NULL);
	while (i < total_words(s, c))
	{
		j = 0;
		str[i] = (char *)malloc(sizeof(char *) * len_of_word(&s[n], c));
		if (!str)
			return (NULL);
		while (s[n] == c)
			n++;
		while (s[n] != c && s[n])
			str[i][j++] = s[n++];
		str[i++][j] = '\0';
	}
	str[i] = NULL;
	return (str);
}
