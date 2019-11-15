/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:40:55 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/15 16:31:47 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *result;

	if (!lst || !f || !del)
		return (NULL);
	if (!(new = ft_lstnew((f)((void *)lst->content))))
		return (NULL);
	result = new;
	lst = lst->next;
	while (lst)
	{
		if (!(new = ft_lstnew((f)((void *)lst->content))))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		lst = lst->next;
		new = new->next;
	}
	return (result);
}
