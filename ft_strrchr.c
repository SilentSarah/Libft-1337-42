/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:14:43 by hmeftah           #+#    #+#             */
/*   Updated: 2022/10/02 18:30:24 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if ((unsigned char )s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if ((unsigned char )s[i] == (unsigned char)c)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
