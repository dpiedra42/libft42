/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:59:56 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/06 18:13:20 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;

	if (dest < source)
	{
		while (len--)
		{
			*dest = *source;
			dest++;
			source++;
		}
	}
	else
		while (len--)
			dest[len] = source[len];
	return (dst);
}

int main()
{
	char str[] = "hello buddy!";
	printf("%s", ft_memmove());
	return (0);
}