/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:19:13 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/07 11:04:45 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** Description : Compute the number of digits of the integer n
 ** Return : The number of digits
*/

int		ft_nbrlen(int n)
{
	int		len;
	long	cpy;

	cpy = (long)n;
	len = 0;
	if (cpy < 0)
	{
		cpy *= -1;
		len++;
	}
	while (cpy > 0)
	{
		cpy /= 10;
		len++;
	}
	return (len);
}
