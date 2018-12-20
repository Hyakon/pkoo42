/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 08:18:21 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/20 15:12:29 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_around(char **tetri, int i, int j, int num)
{
	if (i > 0)
	{
		if (tetri[i - 1][j] == '#' || tetri[i - 1][j] == num + 1 + 'A')
			return ('H');
	}
	if (i < 3)
	{
		if (tetri[i + 1][j] == '#' || tetri[i + 1][j] == num + 1 + 'A')
			return ('B');
	}
	if (j > 0)
	{
		if (tetri[i][j - 1] == '#' || tetri[i][j - 1] == num + 1 + 'A')
			return ('G');
	}
	if (j < 3)
	{
		if (tetri[i][j + 1] == '#' || tetri[i][j + 1] == num + 1 + 'A')
			return ('D');
	}
	return (0);
}

int		tetricheck(t_tri *tetriminos, int num)
{
	int		i;
	int		j;
	int		ht;

	if (num >= 26)
		return (0);
	ht = 0;
	i = 0;
	while (i < 4)
	{
		if (ft_strlen(tetriminos->tetri[i]) != 4)
			return (0);
		j = 0;
		while (tetriminos->tetri[i][j] != '\0')
		{
			if (tetriminos->tetri[i][j] == '#')
			{
				ht++;
				tetriminos->tetri[i][j] = num + 1 + 'A';
				if (!(check_around(tetriminos->tetri, i, j, num)))
					return (0);
			}
			else if (tetriminos->tetri[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	if (ht != 4)
		return (0);
	return (42);
}
