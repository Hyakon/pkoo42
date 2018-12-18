/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:38:48 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 15:25:37 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Prend en paramètre l’adresse d’une chaine de caractères qui
** 	doit être libérée avec free(3) et son pointeur mis à NULL.
** Param. #1 : L’adresse de la chaine de caractère dont il faut libérer la
** 	mémoire et mettre le pointeur à NULL.
** Retour : Rien.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as == NULL || (*as) == NULL)
		return ;
	ft_memdel((void **)as);
}
