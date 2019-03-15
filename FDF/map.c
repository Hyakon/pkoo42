/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 10:19:48 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/18 11:57:49 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_x(t_point *point_list, t_ptr *ptr_list)
{
	t_point	*tmp;
	t_point	*next;
	int		i;
	
	tmp = point_list;
	mlx_pixel_put(ptr_list->mlx_ptr, ptr_list->win_ptr,
			tmp->x * 50 + 50, tmp->y * 50 + 50, 0xFFFFFF);
	next = tmp->nextx;
	while (next != NULL)
	{
		i = 0;
		while (tmp->x * 50 + i <= next->x * 50)
		{
			mlx_pixel_put(ptr_list->mlx_ptr, ptr_list->win_ptr,
					tmp->x * 50 + 50 + i, tmp->y * 50 + 50, 0xFFFFFF);
			i++;
		}
		tmp = tmp->nextx;
		next = next->nextx;
	}
}

void	draw_y(t_point *point_list, t_ptr *ptr_list)
{
	t_point	*tmp;
	t_point	*next;
	int		i;
	
	tmp = point_list;
	mlx_pixel_put(ptr_list->mlx_ptr, ptr_list->win_ptr,
			tmp->x * 50 + 50, tmp->y * 50 + 50, 0xFFFFFF);
	next = tmp->nexty;
	while (next != NULL)
	{
		i = 0;
		while (tmp->y * 50 + i <= next->y * 50)
		{
			mlx_pixel_put(ptr_list->mlx_ptr, ptr_list->win_ptr,
					tmp->x * 50 + 50, tmp->y * 50 + 50 + i, 0xFFFFFF);
			i++;
		}
		tmp = tmp->nexty;
		next = next->nexty;
	}
}

int		create_map(t_point *point_list, t_ptr *ptr_list)
{
	if (point_list == NULL)
	{
		ft_putendl("Map creation failed : no points in file.");
		return (0);
	}
	draw_x(point_list, ptr_list);
	draw_y(point_list, ptr_list);
	del_list(&point_list);
	return (42);
}
