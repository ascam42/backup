/*
** my_printf.h for my_printf in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Nov  2 12:54:53 2015 Luca Ungaro
** Last update Thu Nov 12 16:20:58 2015 Luca Ungaro
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libmy.h"

typedef struct	s_interface
{
  char		*flag;
  int		(*print)(int fd, va_list *ap);
}		t_interface;

/*
** my_printf.c
*/
int	my_printf(const char *format, ...);
int	my_printfln(const char *format, ...);
/*
** my_fdprintf.c
*/
int	my_fdprintf(int fd, const char *format, ...);
int	my_print_flag(int fd, char *str_flag, va_list *ap);
char	*my_getflag(const char *str, int *count);
/*
** my_fdput.c
*/
int	my_fdputchar(int fd, char c);
int	my_fdputstr(int fd, char *str);
int	my_fdputnbr(int fd, int nb);
int	my_fdputnbr_base(int fd, int nb, char *base);
int	my_fdputnbr_base_long(int fd, long nb, char *base);
/*
** my_prints_nb.c
*/
int	my_printhexa(int fd, va_list *ap);
int	my_printdec(int fd, va_list *ap);
int	my_printoct(int fd, va_list *ap);
int	my_printbin(int fd, va_list *ap);
void	my_printnbr(int fd, int nbr, char *base);
/*
** my_prints_unsigned.c
*/
int	my_printhexa_u(int fd, va_list *ap);
int	my_printhexa_u_maj(int fd, va_list *ap);
int	my_printdec_u(int fd, va_list *ap);
int	my_printoct_u(int fd, va_list *ap);
int	my_printbin_u(int fd, va_list *ap);
/*
** my_prints_str.c
*/
int	my_printptr(int fd, va_list *ap);
int	my_printstr(int fd, va_list *ap);
int	my_printstr_hidden(int fd, va_list *ap);
int	my_printchar(int fd, va_list *ap);
/*
** my_putoct.c
*/
int	my_putoct(int fd, int nb);

#endif	/* !MY_PRINTF_H_ */
