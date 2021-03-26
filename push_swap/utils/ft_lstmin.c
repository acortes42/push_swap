/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:41:26 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/26 15:38:22 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


t_list	*ft_lst_min(t_list *a, int *pos, int counter)
{
	int		i;
	t_list	*tmp;
	int n;

	n = 0;
	i = __INT_MAX__;
	tmp = a;
	while (a && n < counter)
	{
		if (*(int *)(a->content) < i)
			i = *(int *)(a->content);
		a = a->next;
		n++;
	}
	a = tmp;
	if (pos != NULL)
		*pos = 0;
	while ((*(int *)(a->content) != i))
	{
		if (pos != NULL)
			(*pos) = *pos + 1;
		a = a->next;
	}
	return (a);
}

t_list	*ft_lst_max(t_list *a, int *pos, int counter)
{
	int		i;
	t_list	*tmp;
	int n;

	i = -2147483648;
	n = 0;
	tmp = a;
	while (a && n < counter)
	{
		if (*(int *)(a->content) > i)
			i = *(int *)(a->content);
		a = a->next;
		n++;
	}
	a = tmp;
	if (pos != NULL)
		*pos = 0;
	while ((*(int *)(a->content) != i))
	{
		if (pos != NULL)
			(*pos) = *pos + 1;
		a = a->next;
	}
	return (a);
}

int	ft_check_order(t_list *a, int *ordered)
{
	int i;
	int size_a;


	i = 0;
	size_a = ft_lstsize(a);
	printf(ANSI_COLOR_CYAN);
	printf("hERE DA cHECK\n");
	while (ordered[i])
		i++;
	if (i != size_a)
		return (0);
	i = 0;
	while(i < size_a)
	{
		if(ft_ptoint(a->content) != ordered[i])
		{
			return(0);
		}
		else
		{
			a = a->next;
		}
		printf("%d\n", i);
		i++;
		
	}
	printf("hERE DA cHECK2\n");
	return(1);
}

int	ft_get_int(t_list *a)
{
	int res;

	res = -2147483648;
	if (a)
		res = ft_ptoint(a->content);
	return (res);
}
