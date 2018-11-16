/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:46:09 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/13 16:01:45 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char	*res;
	char	*str;
	size_t	i;

	i = 0;
	res = dest;
	str = src;
	while (i < n)
	{
		res[i] = str[i];
		i++;
	}
	return (dest);
}
