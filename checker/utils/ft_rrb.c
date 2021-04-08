/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/08 18:38:12 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_rrb(t_list **b)
{
	t_list	*temp;
	t_list	*p;

	if (b == NULL || *b == NULL)
		error_exit("No A stack to rotate");
	p = ft_lstlast(*b);
	temp = ft_lstnew(p->content);
	ft_lstadd_front(b, temp);
	delete_last_node(b);
}
