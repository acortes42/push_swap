/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/02 18:53:55 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_ra(t_list **a)
{
	t_list	*temp;
	t_list	*p;

	if (a == NULL || *a == NULL)
		error_exit("No A stack to rotate");
	p = *a;
	temp = ft_lstnew(p->content);
	ft_lstadd_back(a, temp);
	delete_first_node(a);
}
