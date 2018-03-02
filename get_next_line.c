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



static int  reading(const int fd, char **line)
{
	static char *str = NULL;
	char *buff;
	ssize_t ret;
	char *tmp = NULL;
	char *next_line;

	if (!str)
		str = ft_strnew(0);
	if (str && (next_line = ft_strchr(str, 10)))
	{
		*line = ft_strsub(str, 0, next_line - str);
		str = ft_strdup(++next_line);
	}
	buff = ft_strnew(BUFF_SIZE);
	while (!(ft_strchr(str, '\n')) && (ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strjoin((str), buff);
		ft_strclr(buff);
		str = ft_strdup(tmp);
	}
	if (ret < 0)
		return (-1);
	if (*str)
	{
		if ((next_line = ft_strchr(str, '\n')))
		{
			*line = ft_strsub(str, 0, next_line - str);
			tmp = str;
			str = ft_strdup(++next_line);
			free (tmp);
		}
		else if (!next_line && *str)
		{
			*line = ft_strdup(str);
			ft_strclr(str);
		}
		else
			*line = ft_strdup(str);
		return (1);
	}
	return (0);
}

int     get_next_line(const int fd, char **line)
{
	if (fd < 0 || line == NULL)
		return (-1);
	return (reading(fd, &*line));
}