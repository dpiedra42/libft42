/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:40:55 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/18 11:26:27 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new;
	void	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = (*f)(lst->content);
	if (!(new = ft_lstnew(tmp)))
		return (NULL);
	result = new;
	lst = lst->next;
	while (lst)
	{
		tmp = (*f)(lst->content);
		if (!(new->next = ft_lstnew(tmp)))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (result);
}
