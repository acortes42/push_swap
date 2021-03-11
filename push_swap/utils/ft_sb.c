/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:28:11 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/11 16:45:30 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void ft_sb(t_list *t)
{
	t_list *temp;

	if (!(t))
		return;
	temp = t;
	if (temp != NULL && temp->next != NULL)
		ft_swap(temp->content, temp->next->content);
}
