/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:23:11 by hmeftah           #+#    #+#             */
/*   Updated: 2022/10/04 18:02:13 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i] || (!s[i] && !c))
	{		
		if ((unsigned char )s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		if (s[i] == '\0')
			return (NULL);
	}
	return (NULL);
}
