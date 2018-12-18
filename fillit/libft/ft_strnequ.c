/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:48:41 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 15:35:27 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Compare lexicographiquement s1 et s2 jusqu’à n caractères
** 	maximum ou bien qu’un ’\0’ ait été rencontré. Si les deux
** 	chaines sont égales, la fonction retourne 1, ou 0 sinon.
** Param. #1 : La première des deux chaines à comparer.
** Param. #2 : La seconde des deux chaines à comparer.
** Param. #3 : Le nombre de caractères à comparer au maximum.
** Retour : 1 ou 0 selon que les deux chaines sont égales ou non.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!(s1) || !(s2))
		return (0);
	return (ft_strncmp(s1, s2, n) == 0 ? 1 : 0);
}
