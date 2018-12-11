/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:32:33 by pkoo              #+#    #+#             */
/*   Updated: 2018/12/03 17:58:04 by pkoo             ###   ########.fr       */
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

	tmp = overflow;
	if ((i = looknl(tmp)) >= 0)
	{
		*line = ft_strsub(tmp, 0, i++);
		overflow = ft_strsub(tmp, i, ft_strlen(tmp + i));
		free(tmp);
		return (1);
	}
	while ((j = read(fd, buf, BUFF_SIZE)))
	{
		if (j < 0)
			return (-1);
		buf[j] = '\0';
		*line = tmp;
		if ((tmp = ft_strjoin(tmp, buf)) == NULL)
			return (-1);
		if (*line != NULL)
			free(*line);
		if ((looknl(buf)) >= 0)
		{
			i = looknl(tmp);
			*line = ft_strsub(tmp, 0, i++);
			/* ft_putnbr(i); */
			/* ft_putstr(*line); */
			overflow = ft_strsub(tmp, i, ft_strlen(tmp + i));
			free(tmp);
			return (1);
		}
	}
	if (tmp && *tmp)
	{
		*line = ft_strdup(tmp);
		free(tmp);
		//	ft_putstr(*line);
		overflow = NULL;
		return (1);
	}
	return (0);
}
