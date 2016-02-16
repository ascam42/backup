/*
** my_str_islower.c for my_str_islower in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 15:51:36 2015 Luca Ungaro
** Last update Mon Oct  5 16:03:19 2015 Luca Ungaro
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 'a' || str[i] > 'z')
	return (0);
      ++i;
    }
  return (1);
}
