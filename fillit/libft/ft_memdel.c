/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:20:04 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 23:31:19 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Prend en paramètre l’adresse d’un pointeur dont la zone
**	pointée doit être libérée avec free(3), puis le pointeur est mis à NULL.
** Param. #1 : L’adresse d’un pointeur dont il faut libérer la mémoire puis le
**  mettre à NULL.
** Retour : Rien.
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
