/*
** my_str_isnum.c for my_str_isnum in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 15:14:53 2015 Luca Ungaro
** Last update Mon Oct  5 15:18:45 2015 Luca Ungaro
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	return (0);
      ++i;
    }
  return (1);
}
