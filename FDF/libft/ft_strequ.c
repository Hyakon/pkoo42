/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:43:38 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 15:29:09 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Compare lexicographiquement s1 et s2. Si les deux chaines
** 	sont égales, la fonction retourne 1, ou 0 sinon.
** Param. #1 : La première des deux chaines à comparer.
** Param. #2 : La seconde des deux chaines à comparer.
** Retour : 1 ou 0 selon que les deux chaines sont égales ou non.
*/

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	return (ft_strcmp(s1, s2) == 0 ? 1 : 0);
}
