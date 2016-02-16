/*
** my_strncpy.c for my_strncpy in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 09:06:48 2015 Luca Ungaro
** Last update Mon Oct  5 14:18:25 2015 Luca Ungaro
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n)
    dest[i] = src[i++];
  dest[i] = '\0';
  return (dest);
}
