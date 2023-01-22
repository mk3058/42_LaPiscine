# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 08:02:09 by minkyuki          #+#    #+#              #
#    Updated: 2022/10/16 15:25:23 by minkyuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
TARGET = libft.a
OBJS = ./srcs/ft_putchar.o ./srcs/ft_swap.o ./srcs/ft_putstr.o ./srcs/ft_strlen.o ./srcs/ft_strcmp.o
SRCS = ./srcs/ft_putchar.c, ./srcs/ft_swap.c, ./srcs/ft_putstr.c, ./srcs/ft_strlen.c, ./srcs/ft_strcmp.c
INC = ./includes/ft.h
CFALGS = -Wall -Wextra -Werror

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rc $(TARGET) $(OBJS)

.c.o :
	$(CC) $(CFLAGS) -c -I $(INC) -o $@ $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY : clean fclean re
