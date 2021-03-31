/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_command.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 20:14:48 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/30 20:57:40 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_test_commmands(s_struct *s_alpha)
{
	t_list	*a;
	t_list	*b;
	t_list	*tmp;
	int		x;

	x = 0;
	ft_lstadd_back(&a, NULL);
	ft_lstadd_back(&b, NULL);
	while (s_alpha->parse_string[x])
	{
		tmp = ft_lstnew(&aux[j]);
		ft_lstadd_back(&a, tmp);
		i++;
		j++
}