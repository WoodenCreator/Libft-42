/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshadric <cshadric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 23:38:53 by cshadric          #+#    #+#             */
/*   Updated: 2020/11/17 03:15:39 by cshadric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_;

	new_ = (t_list*)malloc(sizeof(t_list) * 1);
	if (!new_)
		return (NULL);
	if (!content)
		new_->content = NULL;
	else
		new_->content = content;
	new_->next = NULL;
	return (new_);
}
