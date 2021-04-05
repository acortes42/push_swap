/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/05 19:11:52 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_free_list(t_list *head)
{
	t_list	*tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	return (1);
}

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

int	ft_ptoint(int *p)
{
	int	n;

	n = *p;
	return (n);
}

void	execute_alghoritm(t_list *a, t_list *b, char **argv, int argc)
{
	t_utils	*u;
	t_list	*temp;
	int		j;
	int		aux[10000];
	int		i;

	i = 0;
	j = -1;
	u = malloc(sizeof(t_utils));
	while (++i < argc)
	{
		aux[++j] = ft_atoi(argv[i]);
		u->ordered[j] = aux[j];
		temp = ft_lstnew(&aux[j]);
		ft_lstadd_back(&a, temp);
	}
	ft_insertion_sort(u->ordered, argc - 1);
	if (ft_if_ordered(aux, u, argc) == 1)
		return ;
	else if (argc <= 6)
		ft_5_or_less(argc, &a, &b);
	else
		ft_push_swap_backtrack(&a, &b, u);
	free(u);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (argc <= 1)
		return (0);
	if (ft_check_if_correct(argv, argc) == 1 \
		 || ft_check_if_repeated(argv, argc) == 1)
		error_exit("Error en los argumentos\n");
	if (argc == 3 && ft_atoi(argv[1]) > ft_atoi(argv[2]))
	{
		printf("sa\n");
		return (0);
	}
	ft_lstadd_back(&a, NULL);
	ft_lstadd_back(&b, NULL);
	execute_alghoritm(a, b, argv, argc);
	ft_free_list(a);
	ft_free_list(b);
	return (0);
}
