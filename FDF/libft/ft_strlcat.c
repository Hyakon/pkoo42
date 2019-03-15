/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:15:43 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 21:48:34 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		len_dst;
	int		len_src;
	size_t	i;
	int		j;

	len_src = ft_strlen(src);
	len_dst = (ft_strlen(dst) < size ? ft_strlen(dst) : size);
	if (len_dst == (int)size)
		return (size + len_src);
	i = len_dst;
	j = 0;
	while (i < (size - 1) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
