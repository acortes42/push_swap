/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:27:05 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/11 15:42:56 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void ft_ra(t_list **a)
{
	t_list *temp;
	t_list	*p;

	p = *a;
	temp = ft_lstnew(p->content);
	ft_lstadd_back(a, temp);
	delete_first_node(a);
}
