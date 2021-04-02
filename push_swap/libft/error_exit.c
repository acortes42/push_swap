/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 11:32:27 by jruiz-ro          #+#    #+#             */
/*   Updated: 2021/04/02 15:20:07 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	error_exit(char *s)
{
	printf(ANSI_COLOR_RED "Error:\n%s\n"ANSI_COLOR_RESET, s);
	exit(EXIT_FAILURE);
}
