/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:50:17 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/17 03:18:36 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int i)
{
	int j;

	j = 0;
	while (str[j])
		j++;
	if (i == '\0')
		return ((char*)&(*(str + j)));
	j--;
	while (str[j])
	{
		if (str[j] == i)
		{
			return ((char*)&(*(str + j)));
		}
		j--;
		if (j == 0 && str[j] != i)
			return (0);
	}
	return (0);
}
