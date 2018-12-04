/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:31:33 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/16 16:05:10 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t dst_len;
	size_t i;

	dst_len = ft_strlen(s1);
	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[i + dst_len] = s2[i];
		i++;
	}
	s1[i + dst_len] = '\0';
	return (s1);
}
