/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:53:53 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/05 13:17:19 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		else
			i++;
	}
	return (NULL);
}

int main()
{
	char s1[] = "hkd d ihfd d";
	printf("%s\n", ft_strchr(s1, 'd'));
	printf("%s", ft_strchr(s1, 'd'));
	return (0);
}