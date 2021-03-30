/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_repeted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:56:10 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/30 19:11:36 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_if_repeated(char **argv, int argc)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (i < argc - 1)
	{
		while (n < argc)
		{
			if (ft_special_atoi(argv[i]) == ft_special_atoi(argv[n]))
				return (1);
			n++;
		}
		i++;
		n = i + 1;
	}
	return (0);
}
