#include "get_next_line.h"

int	main(int ac, char **av)
{
	int fd;
	char *line;
	int	ret;

	fd = open(av[1], O_RDONLY);
	write(1, "",1);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		(void)ac;
		write(1, "|",1);
	ft_putendl(line);
	}
//	ft_putendl(line);
	if (ret == -1)
		ft_putendl("Error");
	else if (ret == 0)
		ft_putendl("\nOK");

	return (1);
}
