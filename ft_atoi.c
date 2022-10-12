/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:27:55 by hmeftah           #+#    #+#             */
/*   Updated: 2022/10/05 16:22:30 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ((str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\f'
				|| str[i] == '\r' || str[i] == ' ')))
			i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	neg;

	i = spaces(str);
	neg = 1;
	res = 0;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res += str[i] - '0';
		i++;
	}
	return (res * neg);
}
