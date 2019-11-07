/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:40:46 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/07 12:09:09 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *str;

	if (!(str = malloc(sizeof(size) * (count))))
		return (NULL);
	ft_bzero(str, count);
	return (str);
}
