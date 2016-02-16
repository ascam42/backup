/*
** main_test.c for TEST in /home/ungaro_l/mylibs/sources
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct 26 09:59:05 2015 Luca Ungaro
** Last update Mon Oct 26 11:08:02 2015 Luca Ungaro
*/

#include <stdlib.h>

int	main(int ac, char **av)
{
  my_putnbr(my_getnbr_base(av[1], av[2]));
  my_putchar('\n');
  return (0);
}
