/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:02:39 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/18 22:42:01 by pkoo             ###   ########.fr       */
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
	int		word;
	char	**res;
	int		i;
	int len;

	i = 0;
	word = ccountword(s, c);
	res = (char **)malloc(sizeof(char *) * word + 1);
	if (res == NULL)
		return (NULL);
	res[word + 1] = 0;
	while(*s)
	{
		len = ft_strlenc(s, c) + 1;
		//do strndup 
		res[i] = (char *)malloc(sizeof(char) * len);
		if (res[i] == NULL)
		{
			while (i--)
				free(res[i]);
			free(res);
			return(NULL);
		}
		ft_strncpy(res[i], s, len - 1);
		res[i][len] = '\0';
		s += len;
		i++;
	}
	return (res);
}
