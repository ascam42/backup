/*
** my_showstr.c for my_showstr in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 17:45:54 2015 Luca Ungaro
** Last update Tue Nov 24 11:49:00 2015 Luca Ungaro
*/

#include "libmy.h"

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < ' ')
	{
	  my_putchar('\\');
	  my_putchar('0');
	  my_putnbr_base((int)str[i], "0123456789abcdef");
	}
      else
	my_putchar(str[i]);
      ++i;
    }
  return (0);
}
