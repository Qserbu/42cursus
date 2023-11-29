# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 13:10:15 by qserbu            #+#    #+#              #
#    Updated: 2023/11/24 18:53:57 by qserbu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_printf.c
		ft_pointer.c
		ft_putnbr_hexaupper.c
		ft_putnbr_hexalow.c
		ft_putnbrpos.c
		ft_putnbr_base.c
		ft_putstr.c

CC = cc

AR = ar rcs

.c.o:
	$(CC) $(CFLAGS) -I includes -c $< -o $(<:.c=.o)
	
$(NAME): $(OBJ)
	 $(AR) $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
