# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 18:35:45 by dsandshr          #+#    #+#              #
#    Updated: 2019/04/07 17:24:51 by dsandshr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE	=	ft_display_file.c
KONCH	=	ft_display_file
FLAGS	=	-Wall	-Werror	-Wextra
NENUJ	=	ft_display_file.o
all:$(KONCH)
$(KONCH):
	gcc $(FLAGS)	-o	$(KONCH) $(FILE) 
clean:
	rm -f *.o
fclean: clean
	rm	-f 	$(KONCH)
re:	fclean	all
