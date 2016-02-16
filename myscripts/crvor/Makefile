##
## Makefile for fdf2 in /home/ungaro_l/rendu/Igraph/gfx_fdf2
## 
## Made by Luca Ungaro
## Login   <ungaro_l@epitech.net>
## 
## Started on  Thu Dec 17 14:22:58 2015 Luca Ungaro
## Last update Mon Jan 11 16:56:27 2016 Luca Ungaro
##

NAME	= crvor

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Werror -ansi -pedantic
CFLAGS	+= -I../include -I/home/${USER}/.froot/include

LDFLAGS += -L/home/${USER}/.froot/lib/ \
	-llapin \
	-lsfml-audio \
	-lsfml-graphics \
	-lsfml-window \
	-lsfml-system \
	-lstdc++ \
	-ldl \
	-lm
LDFLAGS += -L../lib/ -lmy

SRCS	= main.c \

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
