/*
** my_prints.c for my_printf in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Nov  2 14:47:39 2015 Luca Ungaro
** Last update Sat Nov 14 15:52:57 2015 Luca Ungaro
*/

#include "my_printf.h"

int	my_printhexa(int fd, va_list *ap)
{
  int	nbr;
  int	written;

  nbr = va_arg(ap, int);
  written = 1;
  my_printnbr(fd, nbr, "0123456789ABCDEF");
  while (nbr != 0)
    {
      nbr /= 16;
      written += 1;
    }
  return (written);
}

int	my_printdec(int fd, va_list *ap)
{
  int	nbr;
  int	written;

  nbr = va_arg(ap, int);
  written = 1;
  my_printnbr(fd, nbr, "0123456789");
  while (nbr != 0)
    {
      nbr /= 10;
      written += 1;
    }
  return (written);
}

int	my_printoct(int fd, va_list *ap)
{
  int	nbr;
  int	written;

  nbr = va_arg(ap, int);
  written = 1;
  my_printnbr(fd, nbr, "01234567");
  while (nbr != 0)
    {
      nbr /= 10;
      written += 1;
    }
  return (written);
}

int	my_printbin(int fd, va_list *ap)
{
  int	nbr;
  int	written;

  nbr = va_arg(ap, int);
  written = 1;
  my_printnbr(fd, nbr, "01");
  while (nbr != 0)
    {
      nbr /= 2;
      written += 1;
    }
  return (written);
}

void	my_printnbr(int fd, int nbr, char *base)
{
  if (nbr < 0)
    {
      my_fdputchar(fd, '-');
      nbr *= -1;
    }
  if (nbr >= my_strlen(base))
    {
      my_printnbr(fd, nbr / my_strlen(base), base);
      my_printnbr(fd, nbr % my_strlen(base), base);
    }
  else
    my_fdputchar(fd, base[nbr]);
}
