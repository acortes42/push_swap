/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/11 20:22:17 by acortes-         ###   ########.fr       */
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

void ft_insertion_sort(int arr[], int n)
{
    int i;
	int	key;
	int	j;

	i = 1;
	while (i < n)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
		i++;
    }
}

int ft_check_repeated_nbr(int *arr, int argc)
{
	int x;

	x = 0;
	while (x < argc - 1)
	{
		if (arr[x] == arr[x + 1])
			return (1);
		x++;
	}
	return (0);
}

// Esta funcion es donde me quede

t_list	*ft_lstnew_push(void *content, int *arr, int *arr_unordened, int argc, int i)
{
	t_list	*new;
	int		x;

	x = 0;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	while (x < argc)
	{
		if (arr[x] == arr_unordened[i])
			break;
		x++;
	}
	new->position = (void*)x;
	new->next = NULL;
	return (new);
}

int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *temp;
	int aux[10000];
	int arr[10000];
	int arr_unordened[10000];

	void (*f)();
	int i;

	i = 1 ;
	if (ft_check_if_correct(argv, argc) == 1)
	{
		printf("%s\n Incorrect arguments %s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);
		return (1);
	}
	i = 0;
	while(i < argc)
	{
		arr_unordened[i] = arr[i] = ft_atoi(argv[i]);
		i++;
	}
	ft_insertion_sort(arr, argc - 1);
	if (ft_check_repeated_nbr(arr, argc - 1) == 1)
	{
		printf("%s\nRepeated numbers %s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);
		return (1);
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	while (i < argc)
	{
		aux[i] = ft_atoi(argv[i]);
		temp = ft_lstnew_push(&aux[i], arr, arr_unordened, argc - 1, i);
		ft_lstadd_back(&a, temp);
		i++;
	}
	/*if (ft_ordenation(&a, &b, argc) == 1)
		return (1);*/
	return (0);
}