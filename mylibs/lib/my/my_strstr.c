/*
** my_strstr.c for my_strstr in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 10:36:51 2015 Luca Ungaro
** Last update Tue Nov 24 11:59:30 2015 Luca Ungaro
*/

#include <unistd.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  char	*sub_beggining;

  while (str[i] != *to_find && str[i] != '\0')
    i += 1;
  sub_beggining = str;
  while (str[i] == to_find[j])
    {
      i += 1;
      j += 1;
    }
  if (to_find[j] == '\0')
    return (sub_beggining);
  else
    return (NULL);
}

char	*my_charstr(char *str, char to_find)
{
  int	i;
  char	*sub_pos;

  sub_pos = NULL;
  while (str[i] && sub_pos == NULL)
    {
      if (str[i] == to_find)
	sub_pos = str;
      i += 1;
    }
  return (sub_pos);
}
