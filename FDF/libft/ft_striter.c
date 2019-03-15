/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:17:24 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 15:33:12 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Applique la fonction f à chaque caractère de la chaine de
** 	caractères passée en paramètre. Chaque caractère est passé
** 	par adresse à la fonction f afin de pouvoir être modifié si
** 	nécéssaire.
** Param. : #1 La chaine de caractères sur laquelle itérer.
** Param. : #2 La fonction à appeler sur chaque caractère de s.
** Retour : Rien.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(&(s[i]));
		i++;
	}
}
