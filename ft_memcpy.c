/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:09:59 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/17 03:28:20 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*temp;
	char		*tmp_dest;

	temp = src;
	tmp_dest = dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (n != 0)
	{
		while (i < n)
		{
			*tmp_dest++ = *temp++;
			i++;
		}
	}
	return (dst);
}
