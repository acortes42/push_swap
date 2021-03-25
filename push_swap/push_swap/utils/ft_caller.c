/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caller.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:49:00 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/03/24 12:54:48 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

/*
* RECORDAR METER LEN AL USAR LA FUNCION EN EL PARAMETRO 4 i
*/

void	ft_caller(char *call, t_list **a, t_list **b, int i /*, int flag*/)
{
//	static int x;

	/*
		Parece que la flag -c tiene que colorear solo la ultima palabra que va por salida estandar.
			Pero no tengo ni idea de cómo hacer eso sin que nos fastidie mitad código.

		--->Si (ultima salida por código estandar)
			print(un color que el siguiente printf utilizara)
	*/
	printf("%s \n",call);

	/*
		Tenemos un problema que la norminnete nos puede tirar el ejercicio si usamos un open...

		if (flag == 3)
		{
			open correct fd
			add call and \n
			close fd
		}

		Y en la parte principal, si encuentra la flag 3 borrar documento y crear de nuevo
	*/

	if (call[0] == 's' && call[1] == 'a' && i == 2)
		ft_sa(a);
	else if (call[0] == 's' && call[1] == 'b' && i == 2)
		ft_sb(b);
	else if (call[0] == 's' && call[1] == 's' && i == 2)
		ft_ss(a, b);
	else if (call[0] == 'p' && call[1] == 'a' && ft_strlen(call) == 2)
		ft_pa(a, b);
	else if (call[0] == 'p' && call[1] == 'b' && ft_strlen(call) == 2)
		ft_pb(a, b);
	else if (call[0] == 'r' && call[1] == 'a' && i == 2)
		ft_ra(a);
	else if (call[0] == 'r' && call[1] == 'b' && i == 2)
		ft_rb(b);
	else if (call[0] == 'r' && call[1] == 'r' && i == 2)
		ft_rr(a, b);
	else if (call[0] == 'r' && call[1] == 'r' && call[2] == 'a' && i == 3)
		ft_rra(a);
	else if (call[0] == 'r' && call[1] == 'r' && call[2] == 'b' && i == 3)
		ft_rrb(b);
	else if (call[0] == 'r' && call[1] == 'r' && call[2] == 'r' && i == 3)
		ft_rrr(a, b);
//	printf("Lo ha hecho en -> %d \n", ++x);
/*
	if (flag == 2)
		print_list(*a,*b);
}
