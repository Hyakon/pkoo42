/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 08:32:26 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/18 11:58:41 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	deal_key(int key, void *param)
{
	t_ptr		*ptr_lst;
	static int	i = 0;

	ptr_lst = (t_ptr *)param;
	mlx_string_put(ptr_lst->mlx_ptr, ptr_lst->win_ptr,
			i, i, 0x77B5FE, ft_itoa(key));
	i += 20;
	if (key == 53)
		exit(0);
	return (0);
}

static int	deal_mouse(int clic, void *param)
{
	(void)param;
	ft_putendl(ft_itoa(clic));
	return (0);
}

t_ptr		*create_window(void)
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_ptr	*ptr_list;

	if ((ptr_list = (t_ptr *)malloc(sizeof(t_ptr))) == NULL)
		return (NULL);
	mlx_ptr = mlx_init();
	ptr_list->mlx_ptr = mlx_ptr;
	win_ptr = mlx_new_window(mlx_ptr, WIN_SIZE_X, WIN_SIZE_Y, WIN_NAME);
	ptr_list->win_ptr = win_ptr;
	mlx_key_hook(win_ptr, deal_key, ptr_list);
	mlx_mouse_hook(win_ptr, deal_mouse, ptr_list);
	return (ptr_list);
}
