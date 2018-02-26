/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 18:49:14 by vzamyati          #+#    #+#             */
/*   Updated: 2018/02/10 18:49:19 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include "get_next_line.h"

static int      reading(const int fd, char **line, char *buff)
{
	static char     *str;
	char *tmp = NULL;
	char *next_line = NULL;
	char *new_line = NULL;
	int rd;

	if (!str)
		str = ft_strnew(0);
	while ((rd = read(fd, buff, BUFF_SIZE) > 0))
	{
		tmp = ft_strjoin(str, buff);
		free (str);
		ft_strclr(buff);
		str = ft_strdup(tmp);
		free (tmp);
		if (next_line = ft_strchr(str, '\n'))
			break ;
	}
	if (next_line)
	{
		*line = ft_strsub(str, 0, next_line - str);
		str = ft_strdup(next_line + 1);
		return (1);
	}
	*line = ft_strdup(str);
	if ()
	return (0);
}

int     get_next_line(const int fd, char **line)
{
	char *buff;

	buff = ft_strnew(BUFF_SIZE);
	if (fd < 0 || (read(fd, buff, 0)) < 0 || line == NULL)
		return (-1);
	else
		return (reading(fd, line, buff));
}

//		 str = (ft_strchr(buff,'\n') + 1);