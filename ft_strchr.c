/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:22:53 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/04 22:19:40 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	int j;

	j = 0;
	if (i == '\0')
	{
		while(str[j] != '\0')
			j++;
		return ((char*)&(*(str + j)));
	}
	while (str[j])
	{
		if (str[j] == (unsigned char)i)
		{
			return ((char*)&(*(str + j)));
		}
		j++;
	}
	return (0);
}
