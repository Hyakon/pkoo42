/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:02:39 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 17:25:30 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ccountword(const char *s, char c)
{
	int i;

	i = 0;
	if (!s)
		return (i);
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s != c && *s)
				s++;
			if (*s == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

static int		ft_strlenc(const char *s, char c)
{
	int i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		word;
	char	**res;
	int		i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	word = ccountword(s, c);
	if ((res = (char **)malloc(sizeof(char *) * word + 1)) == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		len = ft_strlenc(s, c);
		res[i] = ft_strndup(s, len);
		if (res[i] == NULL)
		{
			ft_freetab((void *)res, i);
			return (NULL);
		}
		s += len;
		i++;
	}
	res[word] = 0;
	return (res);
}
