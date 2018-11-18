/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:02:39 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/18 15:33:32 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ccountword(const char *s, char c)
{
	int i;

	i = 0;
	if (!s)
		return (i);
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c)
			{
				i++;
				while(*s == c)
					s++;
				if (*s == '\0')
					return (i);
			}
		s++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char *s1;

	s1 = &(&c);
	(void)c;
	(void)s;
	return (s1);
}
