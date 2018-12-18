/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:29:38 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 15:28:04 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Applique la fonction f à chaque caractère de la chaine de
** 	caractères passée en paramètre en précisant son index pour
** 	créer une nouvelle chaine “fraiche” (avec malloc(3)) résultant
** 	des applications successives de f.
** Param. #1 : La chaine de caractères sur laquelle itérer.
** Param. #2 : La fonction à appeler sur chaque caractère de s en précisant
** 	son index.
** Retour : La chaine “fraiche” résultant des applications successives de f.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if ((str = (char *)malloc((ft_strlen(s) + 1) * sizeof(*str))) == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
