/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:32:33 by pkoo              #+#    #+#             */
/*   Updated: 2018/12/11 16:46:31 by pkoo             ###   ########.fr       */
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

static int	complete(char **line, char **overflow, char **tmp)
{
	int i;

	if ((i = looknl(*tmp)) >= 0)
	{
		*line = ft_strsub(*tmp, 0, i++);
		if (*line == NULL)
			return (0);
		*overflow = ft_strsub(*tmp, i, ft_strlen(*tmp + i));
		if (*overflow == NULL)
			return (0);
		free(*tmp);
		return (1);
	}
	return (0);
}

static int	finish(char **line, char **overflow, char **tmp)
{
	if (*tmp && **tmp)
	{
		*line = ft_strdup(*tmp);
		free(*tmp);
		*overflow = NULL;
		return (1);
	}
	return (0);
}

int			get_next_line(int fd, char **line)
{
	static char	*overflow = NULL;
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			j;

	tmp = overflow;
	if (complete(line, &overflow, &tmp))
		return (1);
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
			return (complete(line, &overflow, &tmp));
	}
	return (finish(line, &overflow, &tmp));
}
