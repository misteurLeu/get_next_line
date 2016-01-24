#include "get_next_line.h"

int main(int argc, char **argv)
{
	char *line;
	int fd;

	while (1)
	{
		fd = open(argv[1], O_RDONLY);
		while(get_next_line(fd, &line) > 0)
		{
			ft_putendl(line);
			free(line);
		}
		close(fd);
		free(line);
	}
	return(0);
}
