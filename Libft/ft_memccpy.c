/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:47:08 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/09 15:56:53 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*res;
	char	*str;
	size_t	i;

	i = 0;
	res = dest;
	str = src;
	while (i < n)
	{
		res[i] = str[i];
		if (str[i++] == c)
		{
			return (&dest[i]);
		}
	}
	return (NULL);
}
