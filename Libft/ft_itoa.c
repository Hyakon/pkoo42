/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:54:09 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/19 16:49:41 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_intlen(int n)
{
    int i;

    i = 1;
    if (n < 0)
        n = -n;
    while(n > 10)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     len;
    int     sign;

    len = ft_intlen(n);
    sign = 0;
    if (n < 0)
    {
        len++;
        n = -n;
        sign = 1;
    }
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    str[len] = '\0';
    while(len--)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
    }
    if (sign)
        str[0] = '-';
    return (str);
}
