/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:05:08 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/11 15:57:28 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	if (!(dest = (char *)malloc((ft_strlen(s1) + 1) * sizeof(*s1))))
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}
