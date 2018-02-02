//
// Created by Valeria ZAMYATINA on 2/2/18.
//

#include "get_next_line.h"

int     get_next_line(const int fd, char **line)
{
	char buf[BUFF_SIZE + 1];
	static char *tmp;
	ssize_t     rd;

	while ((rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rd] = '\0';
	}
	return 1;
}