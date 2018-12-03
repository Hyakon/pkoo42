/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:32:33 by pkoo              #+#    #+#             */
/*   Updated: 2018/12/03 17:42:40 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	looknl(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (-1);
	while (*s)
	{
		if (*s == '\n')
			return (i);
		i++;
		s++;
	}
	return (-1);
}


int	get_next_line(int fd, char **line)
{
	static char *overflow = NULL;
	char buf[BUFF_SIZE + 1];
	char *tmp;
	int i;
	int j;

	i = 0;
	tmp = overflow;
	*line = NULL;
	if ((i = looknl(overflow)) >= 0)
	{
		*line = ft_strdupn(overflow, i);
		tmp = overflow;
		overflow = ft_strsub(overflow, i + 1, ft_strlen(overflow) - i);
		free(tmp);
		return (1);
	}
	while ((j = read(fd, buf, BUFF_SIZE)))
	{
		if (j == -1)
			return (-1);
		buf[j] = '\0';
		if ((i = looknl(buf)) >= 0)
		{
			if (*line == NULL)
				*line = ft_strdupn(buf, i);
			else
			{
				tmp = ft_strsub(buf, 0, i);
				*line = ft_strjoin(*line, tmp);
			}
			overflow = ft_strsub(buf, i + 1, j - i - 1);
			return (1);
		}
		if (*line == NULL)
			*line = ft_strdup(buf);
		else
			*line = ft_strjoin(*line, buf);
	}
	if (overflow != NULL)
	{
		*line = ft_strdup(overflow);
		free(overflow);
		overflow = NULL;
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int fd;
	char *line;
	int	ret;

	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		(void)ac;
		write(1, "",1);
		ft_putendl(line);
	}
//	ft_putendl(line);
	if (ret == -1)
		ft_putendl("Error");
	else if (ret == 0)
		ft_putendl("\nOK");

	return (1);
}
