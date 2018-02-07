//
// Created by Valeria ZAMYATINA on 2/2/18.
//

#include <printf.h>
#include "get_next_line.h"

int     get_next_line(const int fd, char **line)
{
	char buf[BUFF_SIZE + 1];
	static char *tmp;
	ssize_t     rd;

	tmp = ft_strnew(0);
	while ((rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		tmp = ft_strjoin(tmp, buf);
		buf[rd] = '\0';
		printf("%s\n", tmp);
	}
	return 1;
}