/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/02 18:53:55 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_rra(t_list **a)
{
	t_list	*temp;
	t_list	*p;

	if (a == NULL || *a == NULL)
		error_exit("No A stack to rotate");
	p = ft_lstlast(*a);
	temp = ft_lstnew(p->content);
	ft_lstadd_front(a, temp);
	delete_last_node(a);
}
