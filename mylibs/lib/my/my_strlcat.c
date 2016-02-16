/*
** my_strlcat.c for my_strlcat in /home/ungaro_l/rendu/Piscine_C_J07/ex_07
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Oct  6 16:35:51 2015 Luca Ungaro
** Last update Tue Oct  6 17:06:45 2015 Luca Ungaro
*/

int	my_strlcat(char *dest, char *src, int size)
{
  int	i;
  int	j;

  i = 0;
  while (dest[i] && i < size)
    i += 1;
  j = 0;
  while (src[j] && i < size)
    {
      dest[i] = src[j];
      i += 1;
      j += 1;
    }
  dest[i] = '\0';
  return (i);
}
