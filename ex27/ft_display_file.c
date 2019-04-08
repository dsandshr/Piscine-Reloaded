/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:17:59 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/07 19:37:26 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fl;
	char	buf;

	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if (argc == 1)
		write(1, "File name missing.\n", 19);
	else
	{
		fl = open(argv[1], O_RDONLY);
		while (read(fl, &buf, 1))
			write(1, &buf, 1);
	}
	return (0);
}
