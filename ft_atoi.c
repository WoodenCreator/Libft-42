/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:13:25 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/17 03:27:23 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int i)
{
	if (i == '\t' || i == '\f' || i == '\r' \
			|| i == '\n' || i == '\v' || i == ' ')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int					i;
	int					l;
	unsigned long long	k;

	i = 0;
	l = 1;
	k = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		l = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		k = k * 10 + (str[i] - 48);
		i++;
	}
	if (k > 9223372036854775807)
	{
		if (l == -1)
			return (0);
		return (-1);
	}
	return (k * l);
}
