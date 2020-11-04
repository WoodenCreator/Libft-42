/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:09:59 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/04 20:53:39 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_mem;
	size_t	i;

	i = 0;
	if(!len)
		return ((void*)b); 
	tmp_mem = (unsigned char*)b;
	while (i < len)
	{
		*tmp_mem++ = c;
		i++;
	}
	return ((void*)b);
}
