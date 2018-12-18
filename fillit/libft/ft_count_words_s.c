/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:45:33 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 12:01:04 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Compute the number of words in a string str. Each word is
** 	separated by one of the characters in s, the beginning or the end
** 	of the string.
** Return : the number of words.
*/

#include "libft.h"

int		ft_count_words_s(const char *str, const char *s)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (ft_isspace_s(str[i], s) && str[i])
		i++;
	while (str[i] != '\0')
	{
		while (ft_isspace_s(str[i], s) && str[i])
			i++;
		while (!(ft_isspace_s(str[i], s)) && str[i])
			i++;
		nb++;
	}
	return (nb);
}
