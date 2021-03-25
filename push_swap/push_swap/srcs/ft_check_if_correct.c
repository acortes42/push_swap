/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_correct.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/24 12:33:03 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

long int	ft_special_atoi(const char *j)
{
	long int i[3];

	i[0] = 0;
	i[2] = 0;
	i[1] = 1;
	while (j[i[0]] == 32 || (j[i[0]] >= 9 && j[i[0]] <= 13))
		i[0]++;
	if (j[i[0]] < '0' && j[i[0]] > '9' && j[i[0]] != '-' && j[i[0]] != '+')
		return (-2847483648);
	if (j[i[0]] == '-' || j[i[0]] == '+')
	{
		if (j[i[0]] == '-')
			i[1] = (i[1] * (-1));
		i[0]++;
	}
	while (('9' >= j[i[0]]) && (j[i[0]] >= '0'))
	{
		i[2] = (i[2] * 10) + (j[i[0]] - '0');
		i[0]++;
		if (i[2] * i[1] > 2147483647)
			return (-2847483648);
		else if (i[2] * i[1] < -2147483648)
			return (-2847483648);
	}
	return (i[2] * i[1]);
}

char			*ft_trim(char *str)
{
	size_t		start;
	size_t		end;
	char		*trimmed;

	if (!str || !(end = ft_strlen(str)))
		return (0);
	start = 0;
	while (ft_isspace(*(str + start)))
		start++;
	end--;
	while (start < end && ft_isspace(*(str + end)))
		end--;
	if (start > end)
		return (0);
	if (!(trimmed = ft_calloc(end - start + 2, sizeof(char))))
		return (0);
	ft_memcpy(trimmed, str + start, (end - start + 1));
	return (trimmed);
}

int			ft_isinteger(char *str)
{
	char	*trimmed;
	char	*i;
	int		is_int;

	if (!str || *str == '\0' || !(trimmed = ft_trim(str)))
		return (0);
	i = trimmed;
	while (ft_isdigit(*i))
		i++;
	is_int = (*i == '\0' ? 1 : 0);
	free(trimmed);
	return (is_int);
}

int ft_check_if_number(char *arg)
{
	if (ft_isinteger(arg) == 0)
		return (1);
	return (0);
}

int ft_check_if_correct(char **argv, int argc, int flag)
{
	int	count;

	if (flag == 0)
		count = 1;
	else
		count = 2;
	while (count < argc)
	{
		if (ft_check_if_number(argv[count]) == 1)
			return (1);
		count++;
	}
	count = 1;
	while(count < argc)
	{
		if (ft_special_atoi(argv[count]) == -2847483648)
			return (1);
		count++;
	}
	return (0);
}