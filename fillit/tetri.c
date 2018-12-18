/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 08:17:14 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/18 14:53:43 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>

static t_tri	*new_tetri(void)
{
	t_tri	*newt;
	int		i;

	if (!(newt = (t_tri *)malloc(sizeof(t_tri))))
		return (NULL);
	if (!(newt->tetri = (char **)malloc(sizeof(char *) * 4)))
	{
		free(newt);
		return (NULL);
	}
	i = 0;
	while (i < 4)
	{
		newt->tetri[i] = NULL;
		i++;
	}
	newt->next = NULL;
	return (newt);
}

int				tetrifill(t_tri **tetrilist, const char *file)
{
	int		fd;
	char	*line;
	int		ret;
	int		i;

	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putendl("open: fail");
		return (0);
	}
	i = 0;
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		if (i % 5 == 0)
		{
			if (!(*tetrilist = new_tetri()))
			{
				lstdel(tetrilist);
				ft_putendl("new_tetri: fail");
				return (0);
			}
		}
		if (i % 5 != 4)
			(*tetrilist)->tetri[i % 5] = line;
		else
			*tetrilist = (*tetrilist)->next;
		i++;
	}
	if (ret == -1)
	{
		lstdel(tetrilist);
		ft_putendl("get_next_line: fail");
		return (0);
	}
	if (close(fd) == -1)
	{
		lstdel(tetrilist);
		ft_putendl("close: fail");
		return (0);
	}
	return (42);
}
