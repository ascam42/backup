/*
** my_str_isalpha.c for my_str_isalpha in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 14:26:24 2015 Luca Ungaro
** Last update Mon Oct  5 15:17:33 2015 Luca Ungaro
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if ((str[i] < 'a' && str[i] > 'Z')
	  || str[i] < 'A' || str[i] > 'z')
	return (0);
      ++i;
    }
  return (1);
}
