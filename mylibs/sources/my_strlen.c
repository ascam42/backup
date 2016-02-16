/*
** my_strlen.c for my_strlen in /home/ungaro_l/rendu/Piscine_C_J04
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Oct  1 09:14:04 2015 Luca Ungaro
** Last update Thu Oct  1 09:19:11 2015 Luca Ungaro
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      ++i;
    }
  return (i);
}
