/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words_c.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:45:14 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 21:53:44 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Compute the number of words in a string str. Each word is
** 	separated by the character c, the beginning or the end of the string.
** Return : the number of words.
*/

int		ft_count_words_c(const char *str, char c)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != '\0')
	{
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
		nb++;
	}
	return (nb);
}
