/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:41:10 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/09 15:01:57 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_if_correct_args(int x, char **argv)
{
	int counter;

	counter  = 0;
	while (counter < x)
	{
		if (!)
	}
}

int main(int argc, char **argv)
{
	int x;

	x = 0;
	if (argc != 0)
	{
		if (ft_check_if_correct_args(argc, argv) == 1)
		{
				ft_putstr(ANSI_COLOR_MAGENTA);
				ft_putstr("A problem have been detected in the arguments\n");
				ft_putstr(ANSI_COLOR_RESET);
				return (1);
		}
		while (x < argc)
		{
			ft_check_args(argv);
			x++;
		}
		return (0);
	}
	ft_putstr(ANSI_COLOR_MAGENTA);
	ft_putstr("Insufient number of arguments\n");
	ft_putstr(ANSI_COLOR_RESET);
	return (1);
}