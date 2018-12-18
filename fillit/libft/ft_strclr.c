/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:13:45 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 14:50:10 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Assigne la valeur ’\0’ à tous les caractères de la chaine
** 	passée en paramètre.
** Param. #1 : La chaine de caractères à clearer.
** Retour : Rien.
*/

void	ft_strclr(char *s)
{
	int		i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
