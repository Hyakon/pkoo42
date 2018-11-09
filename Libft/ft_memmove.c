/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:47:39 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/09 16:00:06 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		tmp[n];
	char		*res;
	const char	*str;
	size_t		i;

	i = 0;
	res = (char *)dest;
	str = (char *)src;
	while (i < n)
	{
		tmp[i] = str[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		res[i] = tmp[i];
		i++;
	}
	return (dest);
}
