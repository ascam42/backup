/*
** my_evil_str.c for my_evil_str in /home/ungaro_l/rendu/Piscine_C_J04
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Oct  1 09:24:36 2015 Luca Ungaro
** Last update Thu Oct  1 09:54:41 2015 Luca Ungaro
*/

char	*my_evil_str(char *str)
{
  int	i;
  int	len;
  char	tmp_swap;

  i = 0;
  len = my_strlen(str) - 1;
  while (i <= len / 2)
    {
      tmp_swap = str[i];
      str[i] = str[len - i];
      str[len - i] = tmp_swap;
      ++i;
    }
  return (str);
}
