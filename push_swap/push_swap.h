/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:36 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/10 20:33:36 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_struct
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
}				t_struct;

// SRCS


// OBJS

void ft_pa(t_list **a, t_list **b);
void ft_pb(t_list **a, t_list **b);
void ft_ra(t_list **a, t_list **b);
void ft_rb(t_list **a, t_list **b);
void ft_rr(t_list **a, t_list **b);
void ft_rra(t_list **a, t_list **b);
void ft_rrb(t_list **a, t_list **b);
void ft_rrr(t_list **a, t_list **b);
void ft_sa(t_list **a, t_list **b);
void ft_sb(t_list **a, t_list **b);
void ft_ss(t_list **a, t_list **b);

#endif
