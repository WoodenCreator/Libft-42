/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:09:59 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/04 18:33:55 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_bzero(void *s, size_t n)
{
	char		*ss;
	size_t		i;

	i = 0;
	if (n == 0)
		return ;
	else
	{
		ss = (char*)s;
		while (i < n)
		{
			*ss++ = '\0';
			i++;
		}
		return ;
	}
}
