/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:21:00 by dpiedra           #+#    #+#             */
/*   Updated: 2019/11/12 15:58:34 by dpiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int		ft_nlength(long int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*ft_makestr(long int n, char *str, int neg, int nlength)
{
	if (neg == 1)
		str[0] = '-';
	while (n > 0)
	{
		str[nlength - 1] = n % 10 + '0';
		n = n / 10;
		nlength--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			nlen;
	int			neg;
	long int	num;

	neg = 0;
	num = (long)n;
	if (num == 0)
		return (str = ft_strdup("0"));
	if (num < 0)
	{
		num = num * -1;
		neg = 1;
	}
	nlen = ft_nlength(num);
	if (neg == 1)
		nlen = nlen + 1;
	if (!(str = malloc(sizeof(char) * (nlen + 1))))
		return (NULL);
	str = ft_makestr(num, str, neg, nlen);
	str[nlen] = '\0';
	return (str);
}
