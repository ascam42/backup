/*
** my_putstr.c for my_putstr in /home/ungaro_l/rendu/Piscine_C_J04
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Oct  1 09:07:57 2015 Luca Ungaro
** Last update Tue Nov 24 11:44:14 2015 Luca Ungaro
*/

#include <unistd.h>
#include "libmy.h"

int	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
  return (0);
}
