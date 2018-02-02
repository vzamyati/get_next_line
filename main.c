//
// Created by Valeria ZAMYATINA on 2/2/18.
//

#include <zconf.h>
#include <fcntl.h>
#include "get_next_line.h"

int     main(int ac, char **av)
{
	int fd;
	char *line;

	fd = open(av[1], O_RDONLY);
	while(get_next_line(fd, &line))
	{
		ft_putstr(line);
	}
	close(fd);
	return (0);
}