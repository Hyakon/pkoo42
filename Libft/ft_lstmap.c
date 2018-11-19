/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:08:14 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/19 17:18:19 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list tmp;
    t_list tmp2;
    t_list debut;

    debut = NULL;
    while (lst)
    {
        tmp = f(lst);
        tmp = ft_lstnew(tmp->content, tmp->content_size);
        if (debut == NULL)
        {
            debut = tmp;
        }
        else
        {
            tmp2->next = tmp;
        }
        tmp2 = tmp;
        lst = lst->next;
    }
}
