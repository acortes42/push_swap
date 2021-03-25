/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:35:56 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/25 17:15:06 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	pw_split_to_a(t_list **a, t_list **b, t_utils *u, int avg, int size)
{
	while (size-- > 0)
	{
		if (ft_lstsize(*b) < 13)
			ft_get_max_to_a(a, b, u);
		else
		{
			if (avg <= ft_get_int(*b))
				ft_caller("pa", a, b, 2);
			else
			{
				if (ft_check_last(a, *b, u))
				{
					ft_caller("pa", a, b, 2);
					ft_caller("ra", a, b, 2);
				}
				else
					ft_caller("pb", a, b, 2);
			}
		}
	}
}
