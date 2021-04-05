/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/05 19:20:24 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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

void	ft_print_checker(int x)
{
	ft_putstr(ANSI_COLOR_RED);
	if (x == 1)
		ft_putstr("KO\n");
	else
	{
		ft_putstr(ANSI_COLOR_MAGENTA);
		ft_putstr("OK\n");
	}
	ft_putstr(ANSI_COLOR_RESET);
}

void	ft_init_struct(t_struct *s_alpha)
{
	int	c;
	int	i;

	i = 0;
	while (read(0, &c, 1) > 0)
	{
		s_alpha->string[i] = c;
		i++;
		if (c == '0')
			break ;
	}
	s_alpha->string[i] = '\0';
	s_alpha->parseString = ft_split(s_alpha->string, '\n');
	return ;
}

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

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;
	t_struct	*s_alpha;
	int			i;

	i = 0;
	s_alpha = malloc(sizeof(t_struct));
	ft_lstadd_back(&a, NULL);
	ft_lstadd_back(&b, NULL);
	ft_work_with_list(&a, argc, argv);
	ft_init_struct(s_alpha);
	if (ft_check_if_all_correct(s_alpha, argv, argc) != 1)
	{
		i = -1;
		while (s_alpha->parseString[++i])
			ft_caller(s_alpha->parseString[i], &a, &b, \
				ft_strlen(s_alpha->parseString[i]));
		ft_ok_or_ko(argc, a, b, s_alpha);
	}
	ft_free_list(a);
	ft_free_list(b);
	ft_free_alpha(s_alpha);
	return (0);
}
