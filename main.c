//
// Created by Valeria ZAMYATINA on 2/2/18.
//

#include <zconf.h>
#include <fcntl.h>
#include <printf.h>
#include "get_next_line.h"

int     main(int ac, char **av)
{
	int fd;
	char *line;
	int gnl;

while (1)
{
	fd = open(av[1], O_RDONLY);
	while ((gnl = get_next_line(fd, &line)) > 0)
	{
		printf("\n%d\n", gnl);
 		ft_putstr(line);
		free(line);
	}
	printf("\n%d", gnl);
	close(fd);
}
	return (0);
}

//int        main(int argc, char **argv)
//{
//	int        fd;
//	int fd2;
//	char    *str;
//	if (argc == 2)
//	{
//		fd = 0;
//		fd2 = 0;
//	}
//	else if (argc == 3) {
//		fd = open(argv[1], O_RDONLY);
//		fd2 = open(argv[2], O_RDONLY);
//	}
//	else
//		return (2);
//	// while (get_next_line(fd, &str) == 1) // get all lines
//	// {
//	//     ft_putendl(str);
//	//     free(str);
//	// }
//	get_next_line(fd, &str);
//	ft_putendl(str);
//	if (str)
//	{
//		free(str);
//		str = NULL;
//	}
//	get_next_line(fd2, &str);
//	ft_putendl(str);
//	if (str)
//	{
//		free(str);
//		str = NULL;
//	}
//	get_next_line(fd2, &str);
//	ft_putendl(str);
//	if (str)
//	{
//		free(str);
//		str = NULL;
//	}
//	get_next_line(fd, &str);
//	ft_putendl(str);
//	if (str)
//	{
//		free(str);
//		str = NULL;
//	}
//	if (argc == 3) {
//		close(fd);
//		close(fd2);
//	}
//}
