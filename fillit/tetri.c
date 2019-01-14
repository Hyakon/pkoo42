/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <gfestin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 08:17:14 by gfestin           #+#    #+#             */
/*   Updated: 2019/01/08 15:50:27 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>


/*
	Cree un nouveau tetriminos, alloue sa memoire, et renvoie
	l'emplacement memoire alloue
	Alloue au tetriminos un tableau de 4 pointeurs sur char
*/
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


/*
	Cree la lite de tetrimos dans tetrilist
	et check que les tetriminos sont bon
	.num le nombre de tetriminos
	.i	 le nombre de ligne / numero de ligne
*/
static int		tetrifillit(int *i, t_tri **tetrilist, t_tri **begin, char *line,
		int *num)
{
	if (*i == 1)
	{
		if (!(*tetrilist = new_tetri()))
		{
			lstdel(tetrilist);
			ft_putendl("new_tetri: fail");
			return (0);
		}
		*begin = *tetrilist;
	}
	else if (*i % 5 == 0)
	{
		if (!((*tetrilist)->next = new_tetri()))
		{
			lstdel(tetrilist);
			ft_putendl("new_tetri: fail");
			return (0);
		}
		*tetrilist = (*tetrilist)->next;
	}
	if (*i % 5 != 0)
	{
		(*tetrilist)->tetri[*i % 5 - 1] = line;
		if (*i % 5 == 4)
		{
			if (!tetricheck(*tetrilist, *num))
			{
				lstdel(tetrilist);
				ft_putendl("tetricheck: fail");
				return (0);
			}
			(*num)++;
		}
	}
	return (42);
}

/*
	open le file et recupere le fd.
	.num  le nombre de tetriminos
	.i		le nombre de ligne

*/

int				tetrifill(t_tri **tetrilist, const char *file)
{
	int		fd;
	char	*line;
	int		ret;
	int		i;
	t_tri	*begin;
	int		num;

	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putendl("open: fail");
		return (0);
	}
	num = -1;
	i = 1;
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		if (!(tetrifillit(&i, tetrilist, &begin, line, &num)))
			return (0);
		i++;
	}
	ft_putstr("i = ");
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putstr("num = ");
	ft_putnbr(num);
	ft_putchar('\n');
	ft_putstr("(i - 1 - num) % 4 = ");
	ft_putnbr((i - 1 - num) % 4);
	ft_putchar('\n');
	if ((i - 1 - num) % 4 != 0 && i != 1)
	{
		lstdel(tetrilist);
		ft_putendl("tetricheck: fail");
		return (0);
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
	*tetrilist = begin;
	return (42);
}
