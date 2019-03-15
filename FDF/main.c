/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:57:34 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/18 11:58:33 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int argc, const char *argv[])
{
	t_ptr	*ptr_list;

	if (argc != 2)
	{
		ft_putendl("usage: ./fdf file");
		return (1);
	}
	if ((ptr_list = create_window()) == NULL)
	{
		ft_putendl("A problem occured while creating the window.");
		return (2);
	}
	if (!(fdf(argv[1], ptr_list)))
		return (3);
	mlx_loop(ptr_list->mlx_ptr);
	return (0);
}
