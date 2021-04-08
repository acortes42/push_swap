/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/08 18:38:12 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*uc;

	uc = (unsigned char *)b;
	i = 0;
	while (len > 0 && i < len)
	{
		uc[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}
