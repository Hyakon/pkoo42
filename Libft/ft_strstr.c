/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:49:09 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/16 16:22:41 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!needle || !*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (needle[j])
		{
			while (haystack[i + j] == needle[j])
				j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
			else
			{
				j = 0;
				break ;
			}
		}
		i++;
	}
	return (NULL);
}
