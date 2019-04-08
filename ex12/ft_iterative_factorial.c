/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:17:58 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/05 20:12:18 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int s;

	s = 1;
	if (nb == 0)
		return (1);
	if ((nb < 0) || (nb > 12))
		return (0);
	while (nb > 0)
	{
		s *= nb;
		nb--;
	}
	return (s);
}