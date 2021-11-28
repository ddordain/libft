/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:04:30 by ddordain          #+#    #+#             */
/*   Updated: 2021/11/26 00:15:44 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list_element;

	new_list_element = (t_list *)malloc(sizeof(t_list));
	if (new_list_element == NULL)
		return (NULL);
	new_list_element->content = content;
	new_list_element->next = NULL;
	return (new_list_element);
}
