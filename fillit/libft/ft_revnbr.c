/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:05:34 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 22:51:19 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** Description : Reverse a positive integer
 ** Return : The reversed number or 0
*/

long	ft_revnbr(int n)
{
	long	nbr;

	nbr = 0;
	while (n > 0)
	{
		nbr *= 10;
		nbr += n % 10;
		n /= 10;
	}
	return (nbr);
}
