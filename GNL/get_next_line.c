/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:39:49 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/28 17:59:21 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
#include <stdio.h>


static int iscn(char *s, int n)
{
	int i;

	i = n;
	while(*s)
	{
		if (*s == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int		get_next_line(const int fd, char **line)
{
	char buf[BUFF_SIZE];
	static char *overflow = NULL;
	char *tmp;
	int i;
	int j;
	
	i = 0;
	tmp = NULL;
	if (*overflow)
		tmp = overflow;
	while ((j = read(fd, buf, BUFF_SIZE)) != 0)
	{
		if (j < 0)
			return (j);
		if (tmp == NULL)
			tmp = ft_strdup(buf);
 		else
		{
			*line = tmp;
			tmp = ft_strjoin(tmp, buf);
			free(*line);
		}
		i = iscn(tmp, i);
		if (i >= 0)
		{
			*line = ft_strdupn(tmp, i);
			overflow = ft_strsub(tmp, i, ft_strlen(tmp));
			free(tmp);
			return (1);
		}
		i += j;
	}
	*line = ft_strdup(tmp);
	free(tmp);
	return (0);
}

/* int		get_next_line(const int fd, char **line)
/* { */
/* 	char buf[BUFF_SIZE + 1]; */
/* 	static char *tmp = NULL; */
/* 	static int i = 0; */
/* 	int j; */

/* 	j = 0; */
/* 	if (tmp) */
/* 	{ */
/* 		j = i; */
/* 		while (tmp[i] != '\n' && tmp[i] != '\0') */
/* 		{ */
/* 			i++; */
/* 		} */
/* 		i++; */
/* 		*line = ft_strsub(tmp, j, i - j -1); */
/* 		if (tmp[i] == '\0') */
/* 		{ */
/* 			free(tmp); */
/* 			return (0); */
/* 		} */
/* 		return (1); */
/* 	} */

/* 	while ((j = read(fd, buf, BUFF_SIZE)) != 0) */
/* 	{ */
/* 		if (j < 0) */
/* 			return (j); */
/* 		buf[j] = '\0'; */
/* 		if (tmp == NULL) */
/* 			tmp = ft_strdup(buf); */
/*  		else */
/* 		{ */
/* 			*line = tmp; */
/* 			tmp = ft_strjoin(tmp, buf); */
/* 			free(*line); */
/* 		} */
/* 	} */

/* 	if (tmp) */
/* 	{ */
/* 		j = i; */
/* 		while (tmp[i] != '\n' && tmp[i] != '\0') */
/* 		{ */
/* 			i++; */
/* 		} */
/* 		i++; */
/* 		*line = ft_strsub(tmp, j,  i - j -1); */
/* 		if (tmp[i] == '\0') */
/* 		{ */
/* 			free(tmp); */
/* 			return (0); */
/* 		} */
/* 		return (1); */
/* 	} */
/* 	return (0); */
/* } */

/*int		get_next_line(const int fd, char **line)
{
	static char *str;
	char buf[BUFF_SIZE];
	char *tmp;
	int i;

	tmp = NULL;
	i = 0;
* 	while (!str[i]) */
/* 	{ */
/* 		i++; */
/* 	} */
/*	while (i = read(fd, buf, BUFF_SIZE))
	{
		if (i < 0)
			return (-1);
		//ft_putstr(buf);
		if (*line == NULL)
			*line = ft_strdup(buf);
		else
			*line = ft_strjoin(line, buf);
	}
	return (1);
}*/

int	main(int ac, char **av)
{
	int fd;
	char *line;
	int	ret;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
			printf("%s", line);
			//	ft_putendl(line);
		1;
		if (ret == -1)
			printf("ERROR");
		//ft_putendl("Error");
		else if (ret == 0)
			printf("\nOK");
		//ft_putendl("\nOK");
	return (1);
}
