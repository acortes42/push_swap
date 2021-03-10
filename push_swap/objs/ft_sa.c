/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:26:08 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/10 20:26:40 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void ft_sa(t_list *t)
{
	t_list *temp;
	temp = t;

	if (temp != NULL && temp->next != NULL)
	{
	ft_swap(temp->content, temp->next->content);
	temp = temp->next->next;
	}
}
