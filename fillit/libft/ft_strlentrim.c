/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlentrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:01:44 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/15 13:45:54 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Compute the length of str without the whitespaces at the
** 	beginning and at the end.
** Return : The number of characters that precede the terminating NUL
** 	character and without the whitespaces at the beginning and at the end.
*/

#include "libft.h"

int		ft_strlentrim(const char *str)
{
	int		len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	while (ft_isspace(str[i]) && str[i])
		i++;
	while (str[i])
	{
		j = 0;
		while (ft_isspace(str[i]) && str[i++] && j++ >= 0)
		{
			if (str[i] == '\0')
				return (len);
			if (!ft_isspace(str[i]))
			{
				i -= j;
				break ;
			}
		}
		i++;
		len++;
	}
	return (len);
}
