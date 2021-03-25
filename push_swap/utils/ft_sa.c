/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:26:08 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/25 17:15:06 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	ft_sa(t_list **a)
{
	if(a == NULL || *a == NULL || (*a)->next == NULL)
 		error_exit("No A stack to swap");

	ft_lstswap(a);
	}
