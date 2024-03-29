/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:54:07 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/04 17:30:35 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	if (nb > 0)
	{
		i = 0;
		while (((i * i) <= nb) && (i < 46431))
		{
			i++;
			if ((i * i) == nb)
				return (i);
		}
	}
	return (0);
}
