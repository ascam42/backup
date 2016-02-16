/*
** my_strcpy.c for my_strcpy in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 08:54:05 2015 Luca Ungaro
** Last update Tue Nov 24 11:54:52 2015 Luca Ungaro
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i += 1;
    }
  return (dest);
}
