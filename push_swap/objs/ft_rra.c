/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <jruiz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:27:24 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/10 21:06:47 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void ft_rra(t_list **a)
{
	t_list *temp;
	t_list	*p;

	p = *a;
	temp = ft_lstlast(a)(p->content);
	ft_lstadd_back(a, temp);
	delete_first_node(a);
	print_list(NULL, *a);
}
