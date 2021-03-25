/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:02:05 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/25 17:15:06 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


int	ft_median(int *list)
{
	int i;
	int result;

	i = 0;
	while(list[i] != 0)
		i++;
	if(i % 2 == 0)
		result = i/2;
	else
		result = (i + 1)/2;
	return(list[result]);
}
// Meto count para hacer colocado - size y no hacer las medias siempre de
// las listas enteras.
long	ft_average(t_list *a, int count)
{
	long x;
	long aux;
	long n;
	float result;

	if (count == -1)
		count = __INT_MAX__;
	n = 0;
	x = 0;
	while (a && n < count)
	{
		aux = ft_ptoint(a->content);
		x += aux;
		a = a->next;
		n++;
	}
	result = x / (n - 1);
	return (result);
}


int	ft_check_last(t_list **a, t_list *to_check, t_utils *utils)
{
	int i;
	t_list aux;

	aux = *ft_lstlast(*a);
	i = 0;

	if (ft_ptoint((to_check)->content) == utils->ordered[i])
		return(1);
	while (ft_ptoint((to_check)->content) != utils->ordered[i])
		i++;
	if (ft_ptoint(((aux).content)) == utils->ordered[i - 1])
		return(1);
	else
		return (0);
}

int	ft_get_size(t_list *a, int limit)
{
	int		i;
	t_list *d;

	d = a;
	if (d == NULL)
		return (0);
	i = 0;
	while (ft_get_int(d) <= limit && d)
	{
		i++;
		d = d->next;
	}
	return (i);
}
