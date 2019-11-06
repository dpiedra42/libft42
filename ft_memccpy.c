/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:18:06 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/06 14:55:30 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
					int c, size_t n)
{
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;

	while (n--)
	{
		if (*source == (unsigned char)c)
			return (dest + 1);
		else
			*dest = *source;
		dest++;
		source++;
	}
	return (NULL);
}
