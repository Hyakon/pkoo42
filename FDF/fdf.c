/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 08:31:04 by gfestin           #+#    #+#             */
/*   Updated: 2019/01/14 13:03:34 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <fcntl.h>

static t_point	*create_point(int x, int y, int z)
{
	t_point	*point;

	if ((point = (t_point *)malloc(sizeof(t_point))) == NULL)
		return (NULL);
	point->x = x;
	point->y = y;
	point->z = z;
	point->nextx = NULL;
	point->nexty = NULL;
	return (point);
}

void		del_list(t_point **point_list)
{
	t_point	*tmp;
	t_point	*next;

	if (point_list == NULL)
		return ;
	tmp = *point_list;
	next = (*point_list)->nextx;
	while (next != NULL)
	{
		free(tmp);
		tmp = next;
		next = next->nextx;
	}
	free(tmp);
}

static void		link_list_y(t_point *point_list)
{
	int		y;
	int		x;
	t_point	*tmp;
	t_point	*begin;
	int		maxx;

	if (point_list == NULL)
		return ;
	maxx = 0;
	begin = point_list;
	while (point_list->nextx != NULL)
	{
		y = point_list->y;
		x = point_list->x;
		if (maxx < x)
			maxx = x;
		tmp = point_list->nextx;
		while (tmp != NULL && (tmp->y == y || tmp->x != x))
			tmp = tmp->nextx;
		point_list->nexty = tmp;
		point_list = point_list->nextx;
	}
	while (begin->x != maxx)
	{
		tmp = begin;
		while (tmp->nexty != NULL)
			tmp = tmp->nexty;
		tmp->nexty = begin->nextx;
		begin = begin->nextx;
	}
}

static t_point	*create_point_list(int fd, int *ret)
{
	char	*line;
	int		x;
	int		y;
	t_point	*begin;
	t_point	*tmp;
	char	**split_line;

	begin = NULL;
	y = 0;
	while ((*ret = get_next_line(fd, &line)) == 1)
	{
		split_line = ft_strsplit(line, ' ');
		x = 0;
		while (split_line[x] != 0)
		{
			if (x == 0 && y == 0)
			{
				if ((tmp = create_point(x, y, ft_atoi(split_line[x]))) == NULL)
				{
					if (begin != NULL)
						del_list(&begin);
					return (NULL);
				}
				begin = tmp;
			}
			else
			{
				if ((tmp->nextx = create_point(x, y, ft_atoi(split_line[x])))
						== NULL)
				{
					if (begin != NULL)
						del_list(&begin);
					return (NULL);
				}
				tmp = tmp->nextx;
			}
			x++;
		}
		y++;
	}
	link_list_y(begin);
	return (begin);
}

int				fdf(const char *file, t_ptr *ptr_list)
{
	int		fd;
	int		ret;
	t_point	*point_list;

	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putendl("File opening failed.");
		return (0);
	}
	if ((point_list = create_point_list(fd, &ret)) == NULL)
	{
		ft_putendl("Linked list creation failed.");
		return (0);
	}

	t_point	*tmp = point_list;
	while (tmp != NULL)
	{
		ft_putnbr(tmp->x);
		ft_putchar(' ');
		ft_putnbr(tmp->y);
		ft_putchar(' ');
		ft_putnbr(tmp->z);
		ft_putchar('\n');
		tmp = tmp->nextx;
	}

	if (!(create_map(point_list, ptr_list)))
		return (0);
	if ((close(fd)) == -1)
	{
		ft_putendl("File closing failed.");
		return (0);
	}
	if (ret == -1)
	{
		ft_putendl("File reading failed.");
		return (0);
	}
	return (42);
}
