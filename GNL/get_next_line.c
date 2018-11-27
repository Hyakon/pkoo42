#define BUFF_SIZE 1
#include "../LibftFinal/libft.h"
#include <fcntl.h>


int		get_next_line(const int fd, char **line)
{
	static char str[1];
	
	while(read(fd, str, BUFF_SIZE))
	{
		ft_putstr(str);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int fd;
	char *line;

	fd = open(av[1], S_IRUSR);
	get_next_line(fd, &line);
	return (1);
}
