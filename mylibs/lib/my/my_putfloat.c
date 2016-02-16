/*
** my_putfloat.c for lib in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Nov  2 19:24:18 2015 Luca Ungaro
** Last update Tue Nov  3 16:44:34 2015 Luca Ungaro
*/

#include "libmy.h"

void	my_putfloat(float nb)
{
  int	i;
  int	entire_part;
  float	decimal_part;

  i = 1000000000;
  entire_part = (int)(nb / 1);
  decimal_part = (nb - entire_part) * i;
  my_putnbr(entire_part);
  my_putchar('.');
  if (decimal_part)
    {
      while (decimal_part / (i = i / 10) == 0 && i > 0)
	my_putchar('0');
    }
  my_putnbr((int)decimal_part);
}
