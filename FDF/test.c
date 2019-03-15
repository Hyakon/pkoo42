/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 11:03:25 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/18 11:59:16 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static t_point	*create_point(int x, int y, int z)
{
	t_point	*point;

	if ((point = (t_point *)malloc(sizeof(t_point))) == NULL)
		return (NULL);
	point->x = x;
	point->y = y;
	point->z = z;
	point->next = NULL;
	return (point);
}

int	main(void)
{
	t_point	*begin;
	t_point	*tmp;

	tmp = create_point(5, 5, 5);
	begin = tmp;
	//tmp = tmp->next;
	tmp->next = create_point(10, 10, 10);
	tmp = tmp->next;
	tmp->next = create_point(15, 15, 15);
	while (begin != NULL)
	{
		ft_putendl(ft_itoa(begin->x));
		begin = begin->next;
	}
	return (0);
}
