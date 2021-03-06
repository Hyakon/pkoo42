/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:58:59 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/20 14:56:28 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Affiche la chaine s sur la sortie standard.
** Param. #1 : La chaine de caractères à afficher.
** Retour : Rien.
*/

#include "libft.h"

void	ft_putstr(const char *s)
{
	int		i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}
