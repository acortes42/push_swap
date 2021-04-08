/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_all_correct.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/08 18:38:12 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	*ft_insertion_sort(int arr[], int argc)
{
	int	num[4];

	if (!arr)
		return (0);
	num[0] = 0;
	while (num[0] < argc)
		num[0]++;
	num[1] = 0;
	num[2] = 0;
	while (num[1] < num[0])
	{
		num[2] = num[1] + 1;
		while (num[2] < num[0])
		{
			if (arr[num[2]] < arr[num[1]])
			{
				num[3] = arr[num[1]];
				arr[num[1]] = arr[num[2]];
				arr[num[2]] = num[3];
			}
			num[2]++;
		}
		num[1]++;
	}
	return (arr);
}

int	ft_check_if_all_correct(t_struct *s_alpha, char **argv, int argc)
{
	int	count;
	int	i;

	if (ft_check_if_correct(argv, argc) == 1 \
		 || ft_check_if_repeated(argv, argc) == 1)
	{
		printf(ANSI_COLOR_RED"Error en los argumentos\n");
		return (1);
	}
	s_alpha->all_int = malloc(sizeof(int) * (argc - 1));
	s_alpha->all_ord_int = malloc(sizeof(int) * (argc - 1));
	count = 1;
	i = 0;
	while (count < argc)
	{
		s_alpha->all_int[i] = ft_atoi(argv[count]);
		s_alpha->all_ord_int[i] = ft_atoi(argv[count]);
		i++;
		count++;
	}
	ft_insertion_sort(s_alpha->all_ord_int, argc - 1);
	return (0);
}

int	ft_get_int(t_list *a)
{
	int	res;

	res = 0;
	if (!a)
		error_exit("No values to get int from");
	res = ft_ptoint(a->content);
	return (res);
}
