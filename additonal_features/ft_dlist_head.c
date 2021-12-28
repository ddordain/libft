/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_head.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:41:13 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/17 10:53:34 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

t_elem	*ft_dlist_head(t_dlist *list)
{
	return (list->head);
}
