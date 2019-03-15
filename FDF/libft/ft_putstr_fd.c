/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:41:38 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 09:55:08 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Ecrit la chaine s sur le descripteur de fichier fd.
** Param. #1 : La chaine de caractères à écrire.
** Param. #2 : Le descripteur de fichier.
** Retour : Rien.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
