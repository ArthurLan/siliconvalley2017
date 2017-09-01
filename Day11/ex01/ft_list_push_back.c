/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 22:52:52 by alanter           #+#    #+#             */
/*   Updated: 2017/08/23 23:42:19 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *pushback;

	pushback = *begin_list;
	if (pushback)
	pushback = ft_create_elem(data);
	*begin_list->next = (pushback);
}
