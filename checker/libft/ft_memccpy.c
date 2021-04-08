/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/08 18:38:12 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t			i;
	unsigned char	*destin;
	unsigned char	*source;

	destin = (unsigned char *) dest;
	source = (unsigned char *) src;
	i = 0;
	while (i < size)
	{
		if (source[i] == (unsigned char)c)
		{
			destin[i] = source[i];
			return (destin + i + 1);
		}
		destin[i] = source[i];
		i++;
	}
	return (0);
}
