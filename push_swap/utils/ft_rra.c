/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:27:24 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/11 16:28:28 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void ft_rra(t_list **a)
{
	t_list *temp;
	t_list	*p;

	p = ft_lstlast(*a);
	temp = ft_lstnew(p->content);
	ft_lstadd_front(a, temp);
	delete_last_node(*a);
}
