/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words_f.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:48:05 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 12:36:17 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Compute the number of words in a string str. Each word is
** 	separate by the truth of f, the beginning or the end of the string.
** Return : the number of words.
*/

int		ft_count_words_f(const char *str, int (*f)(char))
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (f(str[i]) && str[i])
		i++;
	while (str[i] != '\0')
	{
		while (!(f(str[i])) && str[i])
			i++;
		while (f(str[i]) && str[i])
			i++;
		nb++;
	}
	return (nb);
}
