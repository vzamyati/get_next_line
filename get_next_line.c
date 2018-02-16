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

int                 get_next_line(const int fd, char **line)
{
    static char     *tmp;
    char            *ptr;
    char            *buff;
    int             rd;

    buff = ft_strnew(BUFF_SIZE);
    if (!line || fd < 0 || BUFF_SIZE < 1)
        return (-1);
    *line = ft_strnew(1);
    while ((tmp = ft_strchr(*line, '\n')) == NULL
           && (rd = read(fd, buff, BUFF_SIZE) > 0))
    {
        ptr = *line;
        buff[rd] = '\0';
        *line = ft_strjoin(*line, buff);
        free(ptr);
    }
	return 1;
}
