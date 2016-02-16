/*
** my_str_isprintable.c for my_str_isprintable in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 16:08:31 2015 Luca Ungaro
** Last update Mon Oct  5 16:18:26 2015 Luca Ungaro
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] == 127)
	return (0);
      ++i;
    }
  return (1);
}
