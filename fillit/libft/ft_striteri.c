/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:20:11 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 15:33:38 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Applique la fonction f à chaque caractère de la chaine de
** 	caractères passée en paramètre en précisant son index en premier
** 	argument. Chaque caractère est passé par adresse à la
** 	fonction f afin de pouvoir être modifié si nécéssaire.
** Param. #1 : La chaine de caractères sur laquelle itérer.
** Param. #2 : La fonction à appeler sur chaque caractère de s et son index.
** Retour : Rien.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
