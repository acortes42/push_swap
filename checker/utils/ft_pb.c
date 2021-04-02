/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/02 18:53:55 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*temp;
	t_list	*p;

	if (a == NULL || *a == NULL)
		error_exit(ANSI_COLOR_RED"No A stack to push into B");
	p = *a;
	temp = ft_lstnew(p->content);
	ft_lstadd_front(b, temp);
	delete_first_node(a);
}
