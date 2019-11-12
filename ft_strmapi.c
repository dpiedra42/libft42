/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:59:19 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/12 17:54:55 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*snew;

	if (!(snew = malloc(sizeof(char) * (ft_strlen(s)) + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		snew[i] = (*f)(i, s[i]);
	}
	snew[i] = '\0';
	return (snew);
}
