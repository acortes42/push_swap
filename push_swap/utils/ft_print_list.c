/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:05:16 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/31 15:55:58 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_list *a, t_list *b)
{
	char	out[100];
	int		separator;

	separator = 50;
	ft_memset(out, '-', separator);
	out[separator] = 0;
	printf("%s\n", out);
	while (a != NULL || b != NULL)
	{
		if (a != NULL)
		{
			printf("%d", ft_ptoint(a->content));
			a = a->next;
		}
		printf("\t\t\t\t\t");
		if (b != NULL)
		{
			printf("%d", ft_ptoint(b->content));
			b = b->next;
		}
		printf("\n");
	}
}

int	ft_check_sort(t_list *a, t_list *b)
{
	if (b == NULL|| a == NULL)
		return (0);
	if (a->next == NULL)
		return (1);
	while (a->next != NULL)
	{
		if (*(int *)(a->content) > *(int *)(a->next->content))
			return (0);
		a = a->next;
	}
	return (1);
}
