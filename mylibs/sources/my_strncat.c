/*
** my_strncat.c for my_strncat in /home/ungaro_l/rendu/Piscine_C_J07
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Oct  6 10:07:36 2015 Luca Ungaro
** Last update Tue Oct  6 10:08:10 2015 Luca Ungaro
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[j] != '\0')
    j += 1;
  while (src[i] && i < nb)
    {
      dest[j] = src[i];
      i += 1;
      j += 1;
    }
  dest[j] = '\0';
  return (dest);
}
