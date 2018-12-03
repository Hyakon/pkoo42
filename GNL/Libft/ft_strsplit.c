/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:02:39 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/23 14:38:44 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void		ft_init(int *i, int *word, char const *s, char c)
{
	*i = 0;
	*word = ft_ccountword(s, c);
}

char			**ft_strsplit(char const *s, char c)
{
	int		word;
	char	**res;
	int		i;
	size_t	len;

	if (!s)
		return (NULL);
	ft_init(&i, &word, s, c);
	if ((res = (char **)malloc(sizeof(char *) * word + 1)) == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		len = ft_strlenc(s, c);
		res[i] = ft_strdupn(s, len);
		if (res[i++] == NULL)
		{
			ft_freetab((void *)res, --i);
			return (NULL);
		}
		s += len;
	}
	res[word] = 0;
	return (res);
}
