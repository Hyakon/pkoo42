/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:52:34 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/15 14:27:58 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	j = 0;
	while (*haystack && j < len)
	{
		i = 0;
		while (*haystack == *needle && *haystack && j < len)
		{
			needle += 1;
			if (*needle == '\0')
				return ((char *)(haystack - i));
			haystack += 1;
			i++;
			j++;
		}
		needle -= i;
		haystack += (-i + 1);
		j += (-i + 1);
	}
	return (NULL);
}
