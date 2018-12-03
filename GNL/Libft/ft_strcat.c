/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:36:37 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/13 16:01:22 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t len;
	size_t i;
	size_t j;

	j = 0;
	i = ft_strlen(s1);
	len = i + ft_strlen(s2);
	while (i < len)
	{
		s1[i] = s2[j++];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
