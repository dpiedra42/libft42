/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:30:42 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/11 17:18:27 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		strs;
	int		i;

	strs = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			strs++;
			i++;
		}
		else
			i++;
	}
	printf("%d\n", strs);
	return (tab);
}

int		main(void)
{
	char str[] = "who what when where why";
	ft_split(str, 'w');
	return (0);
}
