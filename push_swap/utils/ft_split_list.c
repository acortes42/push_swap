/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:20:00 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/30 15:37:26 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_split_to_a(t_list **a, t_list **b, t_utils *u, int avg)
{
	int	size;

	size = ft_lstsize(*b);
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
					ft_caller("rb", a, b, 2);
			}
		}
	}
}

void	ft_split_to_b(t_list **a, t_list **b, int avg, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (a)
		{
			if (avg > ft_get_int(*a))
				ft_caller("pb", a, b, 2);
			else
				ft_caller("ra", a, b, 2);
			i++;
		}
	}
}
