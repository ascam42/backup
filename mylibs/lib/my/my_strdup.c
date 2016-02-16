/*
** my_strdup.c for my_strdup in /home/ungaro_l/rendu/Piscine_C_J08/ex_01
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Oct  7 08:57:49 2015 Luca Ungaro
** Last update Thu Nov 26 10:23:50 2015 Luca Ungaro
*/

#include <stdlib.h>
#include "libmy.h"

char	*my_strdup(char *src)
{
  char	*str_allocated;

  str_allocated = (char *)malloc((my_strlen(src) + 1) * sizeof(char));
  if (str_allocated != NULL)
    {
      my_strncpy(str_allocated, src,  my_strlen(src));
      if (my_strlen(str_allocated) == 0)
	return (NULL);
    }
  return (str_allocated);
}
