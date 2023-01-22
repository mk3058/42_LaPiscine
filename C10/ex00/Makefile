CC = gcc
NAME = ft_display_file
OBJS = main.o
SRCS = main.c
INC = ./
CFALGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -I $(INC) $(OBJS) -o $@

.c.o :
	$(CC) $(CFLAGS) -c -I $(INC) -o $@ $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re
