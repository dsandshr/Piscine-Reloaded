/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:01:25 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/04 17:29:40 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb > 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else
		return (1);
}
