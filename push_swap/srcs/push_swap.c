/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/11 18:29:09 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void ft_swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *temp;

	int aux[10000];
	void (*f)();
	int i;

	i = 1 ;
	if (ft_check_if_correct(argv, argc) == 1)
	{
		printf("%s\n Incorrect arguments %s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);
		return (1);
	}
	while (i < argc)
	{
		aux[i] = ft_atoi(argv[i]);
		temp = ft_lstnew(&aux[i]);
		ft_lstadd_back(&a, temp);
		i++;
	}
	/*if (ft_ordenation(&a, &b, argc) == 1)
		return (1);*/
	return (0);
}