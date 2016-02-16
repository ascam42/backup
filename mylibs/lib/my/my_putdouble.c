/*
** my_putdouble.c for libmy in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Nov  3 16:06:06 2015 Luca Ungaro
** Last update Tue Nov  3 16:06:29 2015 Luca Ungaro
*/

#include "libmy.h"

void	my_putdouble(double nb)
{
  int	entire_part;
  int	decimal_part;

  entire_part = (int)(nb / 1);
  decimal_part = (int)((nb - entire_part) * 1000000000);
  my_putnbr(entire_part);
  my_putchar('.');
  my_putnbr(decimal_part);
}
