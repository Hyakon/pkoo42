/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:25:05 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 21:19:26 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (*haystack == *needle && *haystack)
		{
			needle += 1;
			if (*needle == '\0')
				return ((char *)(haystack - i));
			haystack += 1;
			i++;
		}
		needle -= i;
		haystack += (-i + 1);
	}
	return (NULL);
}
