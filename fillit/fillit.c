/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 09:20:36 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/18 11:50:21 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		del(char **tetri)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tetri[i] != NULL)
			free(tetri[i]);
		i++;
	}
}

void		lstdel(t_tri **tetrilist)
{
	t_tri	*tmp;
	t_tri	*next;

	if (*tetrilist == NULL)
		return ;
	tmp = *tetrilist;
	next = (*tetrilist)->next;
	while (next != NULL)
	{
		del(tmp->tetri);
		free(tmp);
		tmp = next;
		next = next->next;
	}
	del(tmp->tetri);
	free(tmp);
	*tetrilist = NULL;
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
	if (!tetricheck(tetrilist))
	{
		ft_putendl("error");
		return ;
	}
	lstdel(&tetrilist);
}
