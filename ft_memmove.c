/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:09:59 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/17 03:30:21 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*tmp_dest;

	temp = (unsigned char *)src;
	tmp_dest = (unsigned char *)dst;
	if (src < dst)
	{
		while (n--)
			((unsigned char*)tmp_dest)[n] = ((unsigned char*)temp)[n];
	}
	else
		ft_memcpy(tmp_dest, temp, n);
	return (dst);
}
