/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 18:32:28 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/16 10:48:25 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		chr_nl(char *buf)
{
	int i;

	if (buf == NULL)
		return (-1);
	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int				init(char **alread, char **line, int fd)
{
	int		nl;
	char	*tmp;

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	if ((nl = chr_nl(*alread)) != -1)
	{
		if ((*line = ft_strsub(*alread, 0, nl)) == NULL)
			return (-1);
		tmp = *alread;
		*alread = ft_strsub(*alread, nl + 1, ft_strlen(*alread) - nl - 1);
		free(tmp);
		return (1);
	}
	if ((*line = ft_strdup(*alread)) == NULL)
		return (-1);
	if (*alread != NULL)
		ft_strdel(alread);
	return (0);
}

int				doit(int ret, char *buf, char **line, char **alread)
{
	int		nl;
	char	*tmp;
	char	*tmp2;

	if ((nl = chr_nl(buf)) != -1)
	{
		tmp = *line;
		if ((tmp2 = ft_strsub(buf, 0, nl)) == NULL)
			return (-1);
		if ((*line = ft_strjoin(*line, tmp2)) == NULL)
			return (-1);
		free(tmp2);
		if (tmp != NULL)
			free(tmp);
		if ((*alread = ft_strsub(buf, nl + 1, ret - nl - 1)) == NULL)
			return (-1);
		return (1);
	}
	tmp = *line;
	if ((*line = ft_strjoin(*line, buf)) == NULL)
		return (-1);
	if (tmp != NULL)
		free(tmp);
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char	*alread = NULL;
	char		buf[BUFF_SIZE + 1];
	int			ret;
	int			ret2;

	if ((ret = init(&alread, line, fd)) != 0)
		return (ret);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		if ((ret2 = doit(ret, buf, line, &alread)) != 0)
			return (ret2);
	}
	if (*line[0] != '\0')
		return (1);
	return (0);
}
