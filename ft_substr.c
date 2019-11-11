/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:30:40 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/11 16:11:22 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	n;

	if (start >= ft_strlen(s))
		len = 0;
	if (!s)
		return (NULL);
	if (!(substr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	n = 0;
	while (len-- && s[start] != '\0')
	{
		substr[n] = s[start];
		n++;
		start++;
	}
	substr[n] = '\0';
	return (substr);
}
