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

static int          searching(const int fd, char **line, char *buff)
{
    static char     *tmp;
    ssize_t         rd;

    tmp = ft_strnew(1);
    if (tmp != NULL)
        *line = ft_strdup(buff);
    while (!(ft_strchr(buff, '\n')) && (rd = read(fd, buff, BUFF_SIZE) > 0))
    {
        tmp = ft_strjoin(tmp, buff);
        ft_bzero(buff, ft_strlen(buff));
    }
    *line = ft_strsub(tmp, 0, ft_strlen(tmp)); // search '\n' ;
    if (ft_strlen(tmp) == 0)
        return (0);
    return (1);
}

int                 get_next_line(const int fd, char **line)
{
    char            *buff;

    buff = ft_strnew(BUFF_SIZE);
    if (!(line == NULL || fd < 0))
        return (searching(fd, &*line, buff));
    return (-1);
}
