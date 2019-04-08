/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:03:30 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/03 12:34:06 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;

	i = 0;
	n = 1;
	if (argc > 1)
	{
		while (n <= argc - 1)
		{
			ft_putchar(argv[n][i]);
			i++;
			if (argv[n][i] == '\0')
			{
				ft_putchar('\n');
				n++;
				i = 0;
			}
		}
	}
	return (0);
}
