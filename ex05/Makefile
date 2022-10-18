CC = gcc
NAME = do-op
OBJS = main.o operation.o func.o ft_atoi.o
SRCS = main.c operation.c func.c ft_atoi.c
INC = ./
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -I $(INC) $(OBJS) -o $@

.c.o :
	@$(CC) $(CFLAGS) -c -I $(INC) -o $@ $<

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re
