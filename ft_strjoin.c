/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:47:06 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/08 15:25:58 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	c;
	size_t	d;

	c = strlen(s1);
	d = strlen(s2);
	if (!(join = malloc(sizeof(char) * ((c + d) + 1))))
		return (NULL);

}

int main()
{
	char str[] = "hello";
	char str2[] = "goodbye";
	printf("%s", (str. str2));
	return (0);
}