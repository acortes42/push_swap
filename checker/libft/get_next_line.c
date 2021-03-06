/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:48:15 by acortes-          #+#    #+#             */
/*   Updated: 2021/04/08 18:38:12 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del_buff(char **s)
{
	if (s)
	{
		free(*s);
		*s = NULL;
	}
}

int	gent_n(const char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	return (i);
}

int	put_line(char **s, char **line)
{
	int		end_pos;
	char	*tmp;

	end_pos = gent_n(*s);
	if ((*s)[end_pos] == '\n')
	{
		*line = ft_substr(*s, 0, end_pos);
		tmp = ft_substr(*s, end_pos + 1, ft_strlen(*s));
		free(*s);
		*s = tmp;
		return (1);
	}
	else
	{
		*line = ft_substr(*s, 0, ft_strlen(*s));
		del_buff(s);
		return (0);
	}
}

int	read_line(char **s, int fd, char **line)
{
	char			buff[BUFFER_SIZE + 1];
	char			*tmp;
	int				result;

	result = read(fd, buff, BUFFER_SIZE);
	while (result > 0)
	{
		buff[result] = '\0';
		if (!s[fd])
			s[fd] = ft_substr("", 0, 0);
		tmp = ft_strjoin(s[fd], buff);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(s[fd], '\n'))
			return (put_line(&s[fd], line));
	}
	if (result < 0)
		return (-1);
	else if (result == 0 && !s[fd])
	{
		*line = ft_substr("", 0, 0);
		return (0);
	}
	else
		return (put_line(&s[fd], line));
}

int	get_next_line(int fd, char **line)
{
	static char		*file[4096];

	if (fd < 0 || !line)
		return (-1);
	if (file[fd] && ft_strchr(file[fd], '\n'))
		return (put_line(&file[fd], line));
	else
		return (read_line(file, fd, line));
}
