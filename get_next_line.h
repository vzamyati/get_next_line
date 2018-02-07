//
// Created by Valeria ZAMYATINA on 2/2/18.
//

#ifndef GNL_GET_NEXT_LINE_H
# define GNL_GET_NEXT_LINE_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>


# define BUFF_SIZE 9

int     get_next_line(const int fd, char **line);

#endif
