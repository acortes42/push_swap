/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:26:54 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/10 20:28:42 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void ft_pa(t_list **a, t_list **b)
{
	t_list *temp;
	t_list	*p;

	p = *b;
	temp = ft_lstnew(p->content);
	ft_lstadd_front(a, temp);
	delete_first_node(b);
	print_list(*a,*b);
}
