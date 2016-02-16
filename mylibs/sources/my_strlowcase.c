/*
** my_strupcase.c for my_strupcase in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 13:28:48 2015 Luca Ungaro
** Last update Mon Oct  5 15:41:39 2015 Luca Ungaro
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] += 32;
      ++i;
    }
  return (str);
}
