/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:47:06 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/08 17:23:13 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	str1;
	size_t	str2;

	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	if (!(sjoin = malloc(sizeof(char) * ((str1 + str2) + 1))))
		return (NULL);
	ft_memcpy(sjoin, s1, str1);
	ft_memcpy(sjoin + str1, s2, str2);
	sjoin[str1 + str2] = '\0';
	return (sjoin);
}
