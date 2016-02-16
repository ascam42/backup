/*
** my_puterr.c for my_puterr in /home/ungaro_l/mylibs/sources
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct 19 11:24:27 2015 Luca Ungaro
** Last update Tue Nov 24 11:41:46 2015 Luca Ungaro
*/

#include <unistd.h>
#include "libmy.h"

int	my_puterr(char *str)
{
  write(2, str, my_strlen(str));
  return (0);
}
