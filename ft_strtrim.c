/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:24:54 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/11 16:11:20 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_issep(char c, const char *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	newlen;
	int		start;
	int		end;

	newlen = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (ft_issep(s1[start], set) == 1)
		start++;
	while (ft_issep(s1[end], set) == 1)
		end--;
	newlen = end + 1 - start;
	if (!(newstr = malloc(sizeof(char) * (newlen + 1))))
		return (NULL);
	newstr = ft_substr(s1, start, newlen);
	newstr[newlen] = '\0';
	return (newstr);
}
