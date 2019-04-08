/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:44:01 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/04 17:39:37 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			n++;
		i++;
	}
	return (n);
}