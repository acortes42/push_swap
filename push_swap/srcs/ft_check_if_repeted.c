/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_repeted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/05 19:11:34 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_5_or_less(int argc, t_list **a, t_list **b)
{
	if (argc <= 4)
		ft_3numbers(a, b);
	else
		ft_5numbers(a, b);
}

int	ft_read_zero(char **argv, int argc)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (i < argc)
	{
		if (ft_memcmp(argv[i], "0", ft_strlen(argv[i])) == 0)
			flag++;
		i++;
	}
	if (flag > 1)
		error_exit("Doble zero");
	return (0);
}

int	ft_check_if_repeated(char **argv, int argc)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (i < argc - 1)
	{
		while (n < argc)
		{
			if (ft_memcmp(argv[n], "0", ft_strlen(argv[n])) == 0)
			{
				n++;
				continue ;
			}
			if (ft_special_atoi(argv[i]) == ft_special_atoi(argv[n]))
				return (1);
			n++;
		}
		i++;
		n = i + 1;
	}
	return (ft_read_zero(argv, argc));
}

int	ft_if_ordered(int *aux, t_utils *u, int argc)
{
	int	i;

	i = -1;
	while (++i < argc - 1)
	{
		if (u->ordered[i] == aux[i])
			continue ;
		else
			break ;
	}
	if (i == argc - 1)
		return (1);
	return (0);
}

void	ft_free_all(t_list **a, t_list **b, t_utils *u)
{
	if (a)
		ft_free_list(*a);
	if (b)
		ft_free_list(*b);
	if (u)
		free(u);
}
