##
## Makefile for infinadd in /home/ungaro_l/rendu/Piscine_C_infinadd
## 
## Made by Luca Ungaro
## Login   <ungaro_l@epitech.net>
## 
## Started on  Mon Oct 19 09:59:32 2015 Luca Ungaro
## Last update Fri Nov  6 16:16:11 2015 Luca Ungaro
##

NAME	= printf_test

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Wextra -Werror -ansi
CFLAGS	+= -Iinclude

LDFLAGS	+= -Llib/my/ -lmy

LIBPATH	= lib/my/

all:	lib

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBPATH)

fclean:	clean
	$(MAKE) fclean -C $(LIBPATH)

lib:
	$(MAKE) -C $(LIBPATH)

relib:
	$(MAKE) re -C $(LIBPATH)

re:	fclean relib all

.PHONY:	all clean fclean re lib relib
