/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:04:14 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/19 15:44:48 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Affiche l’entier n sur la sortie standard.
** Param. #1 : L’entier à afficher.
** Retour : Rien.
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n < 10)
		ft_putchar(n % 10 + '0');
}
