/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 18:50:34 by vzamyati          #+#    #+#             */
/*   Updated: 2018/02/10 18:50:38 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_GET_NEXT_LINE_H
# define GNL_GET_NEXT_LINE_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>


# define BUFF_SIZE 5

typedef struct		s_gnl
{
    char            *str;
    int             fd;
    struct s_gnl   *next;
}					t_gnl;

int     get_next_line(const int fd, char **line);

#endif
