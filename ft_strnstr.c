/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:48:01 by hmeftah           #+#    #+#             */
/*   Updated: 2022/10/05 14:20:51 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (*needle == '\0' || haystack == needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (((haystack[i]) != '\0') && i < len - 1)
	{
		j = 0;
		while (haystack[i] == needle[j] && i < len - 1)
		{
			i++;
			j++;
		}
		if (j == ft_strlen(needle))
		{
			return ((char *)&haystack[i - j]);
		}
		i++;
	}
	return (NULL);
}
