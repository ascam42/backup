/*
** my_print_unsigened.c for my_printf in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Nov  2 17:12:17 2015 Luca Ungaro
** Last update Sat Nov 14 15:53:39 2015 Luca Ungaro
*/

#include "my_printf.h"

int		my_printhexa_u(int fd, va_list *ap)
{
  unsigned int	nbr;
  int		written;

  nbr = va_arg(ap, unsigned int);
  written = 1;
  my_printnbr(fd, nbr, "0123456789abcdef");
  while (nbr != 0)
    {
      nbr /= 16;
      written += 1;
    }
  return (written);
}

int		my_printhexa_u_maj(int fd, va_list *ap)
{
  unsigned int	nbr;
  int		written;

  nbr = va_arg(ap, unsigned int);
  written = 1;
  my_printnbr(fd, nbr, "0123456789ABCDEF");
  while (nbr != 0)
    {
      nbr /= 16;
      written += 1;
    }
  return (written);
}

int		my_printdec_u(int fd, va_list *ap)
{
  unsigned int	nbr;
  unsigned int	written;

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

int		my_printoct_u(int fd, va_list *ap)
{
  unsigned int	nbr;
  unsigned int	written;

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

int		my_printbin_u(int fd, va_list *ap)
{
  unsigned int	nbr;
  int		written;

  nbr = va_arg(ap, unsigned int);
  written = 1;
  my_printnbr(fd, nbr, "01");
  while (nbr != 0)
    {
      nbr /= 2;
      written += 1;
    }
  return (written);
}
