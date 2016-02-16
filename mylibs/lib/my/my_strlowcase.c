/*
** my_strupcase.c for my_strupcase in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 13:28:48 2015 Luca Ungaro
** Last update Fri Dec  4 18:37:30 2015 Luca Ungaro
*/

#include <stdio.h>
#include "libmy.h"

char	*my_strlowcase(char *str)
{
  int	i;
  char	*ret;

  i = 0;
  ret = my_strdup(str);
  if (ret)
    {
      while (ret[i])
	{
	  if (ret[i] >= 'A' && ret[i] <= 'Z')
	    ret[i] += 32;
	  ++i;
	}
    }
  return (ret);
}
