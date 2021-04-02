/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/02 18:53:55 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_list **b)
{
	t_list	*temp;
	t_list	*p;

	if (b == NULL || *b == NULL)
		error_exit("No B pile to rotate");
	p = *b;
	temp = ft_lstnew(p->content);
	ft_lstadd_back(b, temp);
	delete_first_node(b);
}
