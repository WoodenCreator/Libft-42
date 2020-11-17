/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:16:51 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/17 03:17:31 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*calc(size_t k, char *str, int sign, int n)
{
	size_t i;
	size_t m;

	i = 0;
	m = k;
	if (sign == 1)
	{
		str[i] = '-';
		i++;
		m = k + 1;
	}
	while (k >= i && sign == 1)
	{
		str[k] = (-(n % 10) + '0');
		n = n / 10;
		k--;
	}
	while (k-- > i && sign == 0)
	{
		str[k] = n % 10 + '0';
		n = n / 10;
	}
	str[m] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	size_t	k;
	int		sign;

	sign = 1;
	i = n;
	str = NULL;
	k = 0;
	sign = (n < 0) ? 1 : 0;
	while (i / 10 != 0)
	{
		i = i / 10;
		k++;
	}
	k++;
	if (sign == 1)
		str = (char*)malloc(sizeof(char) * (k + 2));
	else
		str = (char*)malloc(sizeof(char) * (k + 1));
	if (!str)
		return (NULL);
	str = calc(k, str, sign, n);
	return (str);
}
