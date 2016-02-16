/*
** my_putoct.c for my_printf in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Nov  2 17:00:06 2015 Luca Ungaro
** Last update Mon Nov  2 18:14:06 2015 Luca Ungaro
*/

#include "my_printf.h"

int	my_putoct(int fd, int nb)
{
  int	count;
  int	len;

  count = nb;
  len = 0;
  while (count != 0)
    {
      count /= 8;
      len += 1;
    }
  while (--len)
    my_fdputchar(fd, '0');
  my_fdputnbr_base(fd, nb, "01234567");
  return (0);
}
