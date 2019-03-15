/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:56:34 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 15:04:57 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** Description : Check if c belongs to s
 ** Return : True or False
*/

int		ft_isspace_s(char c, const char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (42);
		i++;
	}
	return (0);
}
