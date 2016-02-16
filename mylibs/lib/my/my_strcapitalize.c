/*
** my_strcapitalize.c for my_strcapitalize in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 14:05:25 2015 Luca Ungaro
** Last update Mon Oct  5 14:14:29 2015 Luca Ungaro
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if ((str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+'
	   || str[i - 1] == ',' || i == 0) && str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
      ++i;
    }
  return (str);
}
