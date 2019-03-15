/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:28:04 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 17:31:02 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*cp1;
	const char	*cp2;

	i = 0;
	cp1 = s1;
	cp2 = s2;
	while (i < n && cp1[i] == cp2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)cp1[i] - (unsigned char)cp2[i]);
}
