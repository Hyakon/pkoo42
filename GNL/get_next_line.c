#define BUFF_SIZE 1;

int		get_next_line(const int fd, char **line)
{
	const char *str;
	
	while(read(fd, str, BUFF_SIZE))
	{
		
	}
}

int	main(int ac, char **av)
{
	int fd;

	fd = open(av[1], S_IRUSR);
	if (fd == -1)
		return (1);
	
}
