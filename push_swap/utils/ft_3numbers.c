/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:01:13 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/25 17:15:06 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	ft_3numbers(t_list **a, t_list **b)
{
	int aux[3];
	int i;
	t_list	*list;
	list = *a;
	i = 0;

	while(i < 3)
		{
			aux[i] = ft_ptoint(list->content);
			if (list && list->next)
				list = list->next;
			i++;
		}
	if (aux[0] > aux[1] && aux[1] < aux[2] && aux[0] < aux[2])
		{
			ft_caller("sa", a, b, 2);
		}
	if (aux[0] > aux[1] && aux[1] > aux[2] && aux[0] > aux[2])
	{
		ft_caller("sa", a, b, 2);
		ft_caller("rra", a, b, 3);
	}
	if (aux[0] > aux[1] && aux[1] < aux[2] && aux[0] > aux[2])
		{
		ft_caller("ra", a, b, 2);
		}
	if (aux[0] < aux[1] && aux[1] > aux[2] && aux[0] < aux[2])
	{
		ft_caller("sa", a, b, 2);
		ft_caller("ra", a, b, 2);
	}
	if (aux[0] < aux[1] && aux[1] > aux[2] && aux[0] > aux[2])
		{
		ft_caller("rra", a, b, 3);
		}
}
