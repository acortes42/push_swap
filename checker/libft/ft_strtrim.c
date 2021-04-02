/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/31 17:55:44 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findpos(char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j] && s2[j] != s1[i])
		{
			j++;
		}
		if (!(s2[j]))
			return (i);
		i++;
	}
	return (0);
}

int	ft_findrpos(char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	while (i > 0)
	{
		i--;
		j = 0;
		while (s2[j] && s2[j] != s1[i])
		{
			j++;
		}
		if (!(s2[j]))
			return (i + 1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		x;
	int		y;
	int		z;
	int		i;

	if (!(s1) || !(set))
		return (NULL);
	i = 0;
	x = ft_findpos(s1, set);
	y = ft_findrpos(s1, set);
	z = (y - x);
	str = malloc((z + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	while (i < z)
	{
		str[i] = s1[i + x];
		i++;
	}
	str[i] = '\0';
	return (str);
}
