/*
** my_strdup.c for my_strdup in /home/ungaro_l/rendu/Piscine_C_J08/ex_01
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Oct  7 08:57:49 2015 Luca Ungaro
** Last update Wed Oct  7 09:45:54 2015 Luca Ungaro
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*str_allocated;

  str_allocated = (char *)malloc((my_strlen(src) + 1) * sizeof(char));
  my_strncpy(str_allocated, src,  my_strlen(src) + 1);
  if (my_strlen(str_allocated) == 0)
    return (NULL);
  return (str_allocated);
}
