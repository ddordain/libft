/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:47:51 by ddordain          #+#    #+#             */
/*   Updated: 2021/11/26 00:17:46 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*dest;
	size_t	total_size;

	total_size = n * size;
	dest = (void *)malloc(total_size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, total_size);
	return (dest);
}
