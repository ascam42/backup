/*
** my_prints2.c for my_printf in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Nov  2 16:44:54 2015 Luca Ungaro
** Last update Thu Nov 26 10:29:22 2015 Luca Ungaro
*/

#include "my_printf.h"

int	my_printptr(int fd, va_list *ap)
{
  void	*ptr;
  long	count;
  int	len;

  len = 0;
  ptr = va_arg(ap, void *);
  count = (long)ptr;
  if (ptr)
    {
      my_fdputstr(fd, "0x");
      my_fdputnbr_base_long(fd, (long)ptr, "0123456789abcdef");
    }
  else
    {
      my_fdputstr(fd, "(nil)");
      len = 5;
    }
  while (count != 0)
    {
      count /= 8;
      len += 1;
    }
  return (len);
}

int	my_printstr(int fd, va_list *ap)
{
  char	*str;
  int	len;

  str = va_arg(ap, char *);
  len = 0;
  if (str)
    {
      len = my_strlen(str);
      len = write(fd, str, len);
    }
  else
    len = write(fd, "(null)", 6);
  return (len);
}

int	my_printstr_hidden(int fd, va_list *ap)
{
  char	*str;
  int	len;

  str = va_arg(ap, char *);
  len = 0;
  if (str)
    {
      while (str[len])
	{
	  if (str[len] < 32 || str[len] >= 127)
	    {
	      my_fdputchar(fd, '\\');
	      my_putoct(fd, (int)str[len]);
	    }
	  else
	    my_putchar(str[len]);
	  len += 1;
	}
    }
  else
    len = write(fd, "(null)", 6);
  return (len);
}

int		my_printchar(int fd, va_list *ap)
{
  unsigned char	c;

  c = (unsigned char)va_arg(ap, int);
  write(fd, &c, 1);
  return (1);
}
