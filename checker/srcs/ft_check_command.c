/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_command.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 20:14:48 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/31 14:21:16 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_inverse_push(s_struct *s_alpha, t_list ** a, t_list **b)
{

}
int	ft_test_commmands(s_struct *s_alpha)
{
	t_list	*a;
	t_list	*b;
	t_list	*tmp;
	int		x;
	int		aux[10000];

	x = 0;
	ft_lstadd_back(&a, NULL);
	ft_lstadd_back(&b, NULL);
	while (s_alpha->parseString[x])
	{
		aux[x]= ft_atoi(s_alpha->parseString[x]);
		tmp = ft_lstnew(&aux[x]);
		ft_lstadd_back(&a, tmp);
		x++;
	}
	ft_inverse_push(s_alpha, &a, &b);
}