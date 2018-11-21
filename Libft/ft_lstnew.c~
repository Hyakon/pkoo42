/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:12:23 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/16 19:13:33 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lsttmp(void const *content, size_t content_size)
{
  t_list *tmp;

  tmp = (t_list *)malloc(sizeof(t_list));
  if (tmp == NULL)
    return(NULL);
  if (content == NULL)
  {
      tmp->content = NULL;
      tmp->content_size = 0;
      return (tmp);
  }
  tmp->content = (void *)content;
  tmp->content_size = content_size;
  return (tmp);
}
