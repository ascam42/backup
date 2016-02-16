/*
** my_show_wordtab.c for my_show_wordtab in /home/ungaro_l/rendu/Piscine_C_J08/ex_03
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Oct  7 10:36:45 2015 Luca Ungaro
** Last update Wed Oct  7 10:40:12 2015 Luca Ungaro
*/

#include <stdlib.h>

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);;
      my_putstr("\n");
      i += 1;
    }
  return (0);
}
