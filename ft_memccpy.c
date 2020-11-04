/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:09:59 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/04 21:35:17 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*temp;
	unsigned char 		*tmp_dest;

	temp = (unsigned char*)src;
	tmp_dest = (unsigned char*)dst;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			if (*temp == (unsigned char)c)
			{
				*tmp_dest++ = *temp++;
				return (tmp_dest);
			}
			*tmp_dest++ = *temp++;
			i++;
		}
	}
	return (0);
}
