/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:09:55 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/07 13:44:39 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (!(s2 = malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
