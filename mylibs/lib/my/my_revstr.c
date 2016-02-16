/*
** my_revstr.c for my_revstr in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 09:13:13 2015 Luca Ungaro
** Last update Thu Nov 26 10:21:18 2015 Luca Ungaro
*/

char	*my_revstr(char *str)
{
  int	len;
  int	i;
  char	tmp;

  len = 0;
  while (str[len])
    ++len;
  len -= 1;
  i = 0;
  while (i <= len / 2)
    {
      tmp = str[i];
      str[i] = str[len - i];
      str[len - i] = tmp;
      ++i;
    }
  return (str);
}
