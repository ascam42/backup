/*
** my_strstr.c for my_strstr in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 10:36:51 2015 Luca Ungaro
** Last update Mon Oct  5 11:06:50 2015 Luca Ungaro
*/

#include <unistd.h>

char	*my_strstr(char *str, char *to_find)
{
  char	*sub_beggining;

  while (*str != *to_find && *str != '\0')
    *(++str);
  sub_beggining = str;
  while (*str == *to_find)
    {
      *(++str);
      *(++to_find);
    }
  if (*to_find == '\0')
    return (sub_beggining);
  else
    return (NULL);
}
