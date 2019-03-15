/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:57:49 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 22:42:51 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Affiche le caractère c sur la sortie standard.
** Param. #1 : Le caractère à afficher.
** Retour : Rien.
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
