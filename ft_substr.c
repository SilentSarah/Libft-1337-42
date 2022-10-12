/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:11:37 by hmeftah           #+#    #+#             */
/*   Updated: 2022/10/06 16:41:58 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len > ft_strlen(s))
		return (ft_calloc(sizeof(char), 1));
	string = (char *)malloc(len + 1);
	if (!(string))
		return (NULL);
	while (i < len)
	{
		string[i] = *(s + start);
		start++;
		i++;
	}
	string[i] = '\0';
	return (string);
}
