/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:43:05 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/03 15:33:48 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(char **arg, int argcd)
{
	int i;

	i = 0;
	while (++i < argcd)
	{
		ft_putstr(arg[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		n;
	int		i;
	char	*st;

	n = 1;
	while (n)
	{
		n = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0 && ++n == 1)
			{
				st = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = st;
			}
		}
	}
	ft_print(argv, argc);
	return (0);
}
