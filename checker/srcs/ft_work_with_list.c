/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_with_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:36:36 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/02 15:15:10 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_ok_or_ko(int argc, t_list *a, t_list *b, t_struct s_alpha)
{
	int	i;

	i = -1;
	print_list(a, b);
	while (++i < argc - 1)
	{
		if (s_alpha.all_ord_int[i] != ft_get_int(a))
		{
			printf(ANSI_COLOR_RED"\nKO\n");
			return ;
		}
		a = a->next;
	}
	printf(ANSI_COLOR_GREEN"\nOK\n");
}

void	ft_work_with_list(t_list **a, int argc, char **argv)
{
	int		j;
	int		aux[10000];
	int		i;
	t_list	*temp;

	i = 1;
	j = 0;
	while (i < argc)
	{
		aux[j] = ft_atoi(argv[i]);
		temp = ft_lstnew(&aux[j]);
		ft_lstadd_back(a, temp);
		i++;
		j++;
	}
}
