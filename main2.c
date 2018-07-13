#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "get_next_line.h"

int		main(int ac, char **av)
{
	int		fd;
	int		fd2;
	char	*line;
	char	*line2;
	int		ret;
	int		ret2;

	if (ac == 1)
	{
		fd = 0;
		while ((ret = get_next_line(fd, &line)))
	}
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		while ((ret = get_next_line(fd, &line) > 0))
		{
			free(line);
		}
		ret = get_next_line(fd, &line);
		printf("%s%d\n", line, ret);
		free(line);
		close(fd);
		return (0);
	}
	if (ac == 3)
	{
		fd = open(av[1], O_RDONLY);
		fd2 = open(av[2], O_RDONLY);
		if (fd == -1 || fd2 == -1)
		{
			return (0);
		}
		ret = 1;
		ret2 = 1;
		while (1) 
		{
			if (ret == 1)
			{
				ret = get_next_line(fd, &line);
			}
			if (ret2 == 1)
			{
				ret2 = get_next_line(fd2, &line2);
			}
			if (ret == 0 && ret2 == 0)
				break ;
		}
	}
	return (0);
}
