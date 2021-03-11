/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:05:16 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/11 15:22:40 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void print_list(t_list *a, t_list *b)
{

    int		x;
	char	out[100];
	int		separator;

	separator = 50;
	ft_memset(out, '-', separator);
	out[separator] = 0;
	printf("%s\n", out);
    while(a || b)
    {
		if (a)
		{
			printf("%d", ft_ptoint(a->content));
			a = a->next;
		}
		printf("\t\t\t\t\t");
		if (b)
		{
			printf("%d", ft_ptoint(b->content));
			b = b->next;
		}
	printf("\n");
    }
    printf("END\n");
}

