/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/08 18:38:12 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	char		*source;
	size_t		i;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dest == NULL && source == NULL)
		return (dst);
	if (src > dst)
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else if (src < dst)
	{
		i = len;
		while (i-- > 0)
			dest[i] = source[i];
	}
	return (dst);
}
