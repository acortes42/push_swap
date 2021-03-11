/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:27:12 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/11 16:44:01 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void ft_rb(t_list **b)
{
	t_list *temp;
	t_list	*p;

	if (!(*b))
		return;
	p = *b;
	temp = ft_lstnew(p->content);
	ft_lstadd_back(b, temp);
	delete_first_node(b);
}
