/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:42:52 by hmeftah           #+#    #+#             */
/*   Updated: 2022/10/05 17:15:21 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;

	if (size == 0 && count == 0)
	{
		size = 1;
		count = size;
	}
	b = malloc(count * size);
	if (!(b))
		return (NULL);
	ft_bzero(b, size * count);
	return (b);
}
