/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-ro <rpunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:58:41 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/14 09:54:19 by jruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

/*
*
*/
int	*insertionSort(int arr[])
{
	int	n;
	int	i;
	int	j;
	int tmp;

	n = 1;
	while(arr[n] != 0)
		n++;

	i = 0;
	j = 0;
	while(i < n)
	{
		j = i + 1;
		while(j < n)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		j++;
		}
	i++;
	}
	return(arr);
}

int ft_ptoint(int *p)
{
	int n;

	n = *p;
	return(n);
}

void	ft_lstswap(t_list **s)
{
	t_list	*tmp;

	if (*s && (*s)->next)
	{
		tmp = (*s)->next;
		(*s)->next = tmp->next;
		tmp->next = *s;
		*s = tmp;
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

int ft_algoritm(int argc, char **argv, int flag)
{
	t_list *a;
	t_list *b;
	t_list *temp;
//	t_utils *utils;
//	int average;
	int j;




	int aux[10000];
//	average = 0;

	int i;
	i = 1 ;
	j = 0;


	ft_lstadd_back(&a, NULL);
	ft_lstadd_back(&b, NULL);


	while (i < argc)
		{
			aux[j]= ft_atoi(argv[i]);
			temp = ft_lstnew(&aux[j]);
			ft_lstadd_back(&a, temp);
			i++;
			j++;
		}

i = 0;
/*
while(aux[i] != 0)
{
	utils->ordered[i] = aux[i];
	i++;
}
	insertionSort(utils->ordered);
*/
	print_list(a, b);

	if (argc == 4)
		ft_3numbers(&a, &b);
/*	if (argc <= 13)
		ft_5numbers(&a, &b);*/

	print_list(a, b);
	return 0;
}

// esta funcion mira que todo este en correcto funcionamiento y retorna -1 si falla. 
//	En caso correcto retorna el codigo de la flag. 0 Si no hay flag

/*
-c imprimir con colores:
-v imprimir como debugueo /print/clean...
-r guardar en un .txt y leerlo desde allí
2:56
-e cambiar las ordenes por emojis
2:57
-? te escribe los numeros con letras...
-i ineficiente mode, lo mete a pelo al ft_5num
-h printea en pantalla todos 
*/

int ft_study_if_all_correct(int argc, char **argv)
{
	int flag;

	flag = 0;
	if (argc >= 2)
	{
		if (ft_strncmp(argv[0], "-c", ft_strlen(argv[0]) == 0))
			flag = 1;
		else if (ft_strncmp(argv[0], "-v", ft_strlen(argv[0]) == 0))
			flag = 2;
		else if (ft_strncmp(argv[0], "-r", ft_strlen(argv[0]) == 0))
			flag = 3;
		else if (ft_strncmp(argv[0], "-e", ft_strlen(argv[0]) == 0))
			flag = 4;
		else if (ft_strncmp(argv[0], "-?", ft_strlen(argv[0]) == 0))
			flag = 5;
		else if (ft_strncmp(argv[0], "-i", ft_strlen(argv[0]) == 0))
			flag = 6;
		else if (ft_strncmp(argv[0], "-h", ft_strlen(argv[0]) == 0))
			flag = 7;
		else
			flag = 0;
	}
	if (ft_check_if_correct(argv, argc, flag) == 1)
	{
		printf("%s\n Incorrect arguments %s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);
		return (-1);
	}
	return (flag);
}


int main(int argc, char **argv)
{
	int flag;

	flag = ft_study_if_all_correct(argc, argv);
	if (flag < 0)
		return (1);
	//Esto es una versión temprana de -c
	if (flag == 1)
		printf(ANSI_COLOR_BLUE);
	
	printf("Aqui llego\n");
	//ft_algoritm(argc, argv, flag);
	return (0);
	
}

