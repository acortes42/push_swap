/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_correct.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/02 14:48:57 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

long int	ft_special_atoi(const char *j)
{
	long int	i[3];

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

int	ft_check_if_number(char *arg)
{
	if (ft_isinteger(arg) == 0)
		return (1);
	return (0);
}

int	ft_check_if_correct(char **argv, int argc)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		if (ft_memcmp(argv[count], "0", ft_strlen(argv[count])) == 0)
		{
			count++;
			continue ;
		}
		if (ft_special_atoi(argv[count]) == -2847483648)
			return (1);
		count++;
	}
	return (0);
}
