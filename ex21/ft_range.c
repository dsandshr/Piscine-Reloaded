/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:49:27 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/04 17:49:24 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *str;
	int i;

	if (min >= max)
	{
		str = NULL;
		return (str);
	}
	else
		str = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min != max)
	{
		str[i++] = min;
		min += 1;
	}
	return (str);
}
