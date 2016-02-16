##
## Makefile for lib_make in /home/ungaro_l/rendu/Piscine_C_J10
## 
## Made by Luca Ungaro
## Login   <ungaro_l@epitech.net>
## 
## Started on  Fri Oct  9 09:04:28 2015 Luca Ungaro
## Last update Wed Dec  2 10:57:18 2015 Luca Ungaro
##

AR	= ar rc

RANLIB	= ranlib

CC	= gcc

RM	= rm -f

CP	= cp -u

NAME	= libmy.a

SRCS	= my_advanced_sort_wordtab.c \
	my_evil_str.c \
	my_factorielle_rec.c \
	my_find_prime_sup.c \
	my_getnbr_base.c \
	my_getnbr.c \
	my_getstr.c \
	my_isneg.c \
	my_is_prime.c \
	my_power_rec.c \
	my_putchar.c \
	my_puterr.c \
	my_putnbr_base.c \
	my_putnbr.c \
	my_putstr.c \
	my_revstr.c \
	my_showstr.c \
	my_sort_wordtab.c \
	my_show_wordtab.c \
	my_sort_int_tab.c \
	my_square_root.c \
	my_strcapitalize.c \
	my_strcat.c \
	my_strncat.c \
	my_strlcat.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strcpy.c \
	my_strncpy.c \
	my_strdup.c \
	my_stralloc.c \
	my_strlen.c \
	my_str_isalpha.c \
	my_str_isnum.c \
	my_str_islower.c \
	my_str_isprintable.c \
	my_str_isupper.c \
	my_strlowcase.c \
	my_strupcase.c \
	my_strstr.c \
	my_str_to_wordtab.c \
	my_swap.c \
	my_swap_str.c \
	sum_params.c \
	my_strlen.c \
	my_putfloat.c \
	list/my_free_list.c \
	list/my_last_elem.c \
	list/my_put_in_list.c \
	list/my_put_in_circ.c \
	list/my_show_list.c \
	printf/my_printf.c \
	printf/my_fdprintf.c \
	printf/my_prints_nb.c \
	printf/my_prints_str.c \
	printf/my_prints_unsigned.c \
	printf/my_putoct.c \
	printf/my_fdput.c

DEST	= ../

HEAD	= include/libmy.h \
	include/list.h \
	include/my_printf.h

INCLUDE	= ../../include

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Iinclude

all:	$(NAME)
	$(CP) $(HEAD) $(INCLUDE)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)
	$(CP) $(NAME) $(DEST)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(DEST)$(NAME)
	$(RM) $(INCLUDE)$(NAME)

re:	fclean all

.PHONY:	all clean fclean re
