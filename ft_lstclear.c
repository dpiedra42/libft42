/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:02:58 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/15 13:40:32 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{

}

//void	ft_lstclear(t_list **lst, void (*del)(void *))
//{
//	t_list	*tmp;
//	t_list	*tmp2;
//
//	if (!lst || !*lst || !del)
//		return ;
//	tmp = *lst;
//	tmp2 = tmp;
//	while (tmp)
//	{
//		tmp2 = tmp->next;
//		(*del)((void *)tmp->content);
//		free(tmp);
//		tmp = tmp2;
//	}
//	*lst = NULL;
//}