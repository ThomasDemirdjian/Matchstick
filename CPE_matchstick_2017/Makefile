##
## Makefile for CPE_2016_matchstick in /home/thomas/CPE_2016_matchstick
##
## Made by thomas
## Login   <thomas@epitech.net>
##
## Started on  Tue Feb 14 14:17:31 2017 thomas
## Last update Tue Feb 14 14:17:31 2017 thomas
##

CC	= gcc

RM	= rm -f

NAME	= matchstick

SRCS	= src/main.c	\
	  src/graph.c	\
	  src/ia.c	\
	  src/tab.c	\
	  src/gnl.c	\
	  src/game.c	\
	  src/help.c	\
	  src/write.c


OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
