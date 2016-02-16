/*
** my_str_isupper.c for my_str_isupper in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 16:09:08 2015 Luca Ungaro
** Last update Mon Oct  5 16:09:14 2015 Luca Ungaro
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 'A' || str[i] > 'Z')
	return (0);
      ++i;
    }
  return (1);
}
