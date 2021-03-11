/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:27:29 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/11 16:29:18 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void ft_rrb(t_list **b)
{
	t_list *temp;
	t_list	*p;

	p = ft_lstlast(*b);
	temp = ft_lstnew(p->content);
	ft_lstadd_front(b, temp);
	delete_last_node(*b);
}