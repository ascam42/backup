/*
** my_fdput.c for my_printf in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Nov  2 18:03:44 2015 Luca Ungaro
** Last update Thu Nov 12 11:59:48 2015 Luca Ungaro
*/

#include "my_printf.h"

int	my_fdputchar(int fd, char c)
{
  write(fd, &c, 1);
  return (0);
}

int	my_fdputstr(int fd, char *str)
{
  write(fd, str, my_strlen(str));
  return (0);
}

int	my_fdputnbr(int fd, int nb)
{
  if (nb < 0)
    {
      my_fdputchar(fd, '-');
      nb *= -1;
    }
  if (nb > 9)
    {
      my_fdputnbr(fd, nb / 10);
      my_fdputnbr(fd, nb % 10);
    }
  else
    my_fdputchar(fd, nb + '0');
  return (0);
}

int	my_fdputnbr_base(int fd, int nb, char *base)
{
  if (nb < 0)
    {
      my_fdputchar(fd, '-');
      nb *= -1;
    }
  if (nb >= my_strlen(base))
    {
      my_fdputnbr_base(fd, nb / my_strlen(base), base);
      my_fdputnbr_base(fd, nb % my_strlen(base), base);
    }
  else
    my_fdputchar(fd, base[nb]);
  return (0);
}

int	my_fdputnbr_base_long(int fd, long nb, char *base)
{
  if (nb < 0)
    {
      my_fdputchar(fd, '-');
      nb *= -1;
    }
  if (nb >= my_strlen(base))
    {
      my_fdputnbr_base_long(fd, nb / my_strlen(base), base);
      my_fdputnbr_base_long(fd, nb % my_strlen(base), base);
    }
  else
    my_fdputchar(fd, base[nb]);
  return (0);
}
