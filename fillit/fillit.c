/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <gfestin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 09:20:36 by gfestin           #+#    #+#             */
/*   Updated: 2019/01/08 16:56:06 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		max(int i, int j)
{
	return (i > j ? i : j);
}

char **is_valid(char **mat, char **tetri)
{
	return ();
}

/*

	Fonction de check placement
	Fonction de placement
	On place les tetriminos sur la droite
	On depill et on les place sur la gauche un par un (en dessous)
	en boucle.

	On commence au le place un tetrimos et on place tout les
	autre tetriminos de la liste sauf celui qu'on vient de placer en premier.

*/

// t_tri** filltab(t_tri *tetrilist)
// {
// 	t_tri *placed[26];
// 	int i;
//
// 	i = 0;
// 	while (tetrilist)
// 	{
// 		placed[i] = tetrilist;
// 		i++;
// 		tetrilist	= tetrilist->next;
// 	}
// 	return (placed);
// }

point nextempty(**map, int *i, int *j)
{
	return (i,j);
}

void	backtrack(t_tri *tetrilist)
{
	char	matmp[26 * 4][26 * 4];
	char	matfi[26 * 4][26 * 4];
	t_tri *placed[26];
	t_tri	*tmp;
	int		max;

	tmp = tetrilist;
	while (tmp != NULL)
	{
		tmp = tmp->next;
	}
}

void	fillit(const char *file)
{
	t_tri	*tetrilist;

	tetrilist = NULL;
	if (!tetrifill(&tetrilist, file))
	{
		ft_putendl("tetrifill: fail");
		return ;
	}
	int i;
	while (tetrilist != NULL)
	{
		i = 0;
		while (i < 4)
		{
			ft_putendl((const char *)tetrilist->tetri[i]);
			i++;
		}
		ft_putendl(" -- ");
		tetrilist = tetrilist->next;
	}
	backtrack(tetrilist);
	lstdel(&tetrilist);
}
