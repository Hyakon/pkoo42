/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:45:24 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 09:55:47 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Ecrit la chaine s sur le descripteur de fichier fd suivi d’un
** 	’\n’.
** Param. #1 : La chaine de caractères à écrire.
** Param. #2 : Le descripteur de fichier.
** Retour : Rien.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
