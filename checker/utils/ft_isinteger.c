/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinteger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/08 18:38:12 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isinteger(char *str)
{
	char	*trimmed;
	char	*i;
	int		is_int;

	trimmed = ft_trim(str);
	if (!str || *str == '\0' || !(trimmed))
		return (0);
	i = trimmed;
	while (ft_isdigit(*i))
		i++;
	if (*i == '\0')
		is_int = 1;
	else
		is_int = 0;
	free(trimmed);
	return (is_int);
}
