/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:49:47 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/17 10:24:52 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void	ft_dlist_destroy(t_dlist *list)
{
	void	*data;

	data = NULL;
	while (ft_dlist_size(list) > 0)
	{
		if (ft_dlist_remove(list, ft_dlist_tail(list), (void **)&data) == 0
			&& list->destroy != NULL)
		{
			list->destroy(data);
		}
	}
	return ;
}
