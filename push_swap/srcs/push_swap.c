/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/11 16:31:23 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

int ft_ptoint(int *p)
{
	int n;
	n = *p;
	return(n);
}

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
	t_list *temp2;

	int aux[10000];
	int aux2[10000];
	void (*f)();

	int i;
	int j;
	i = 1 ;
	while (i < argc)
		{
			aux[i] = ft_atoi(argv[i]);
			temp = ft_lstnew(&aux[i]);
			ft_lstadd_back(&a, temp);
			i++;
		}

	//ft_lstadd_back(&b, NULL);
	j = 1;
	while (j < 4)
		{
			aux2[j] = j;
			temp2 = ft_lstnew(&aux2[j]);
			ft_lstadd_back(&b, temp2);
			j++;
		}

	print_list(a, b);
	ft_rrr(&a, &b);
	printf("\n");
	print_list(a, b);
	//if (argc == 4)
	//	ft_3num(t);
	return 0;
}