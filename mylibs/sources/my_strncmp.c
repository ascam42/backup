/*
** my_strncmp.c for my_strncmp in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 13:23:21 2015 Luca Ungaro
** Last update Mon Oct  5 13:25:19 2015 Luca Ungaro
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	diff;

  i = 0;
  diff = 0;
  while (*s1 && *s2 && i < n)
    {
      diff = *s1 - *s2;
      if (diff != 0)
	return (diff);
      ++i;
      *(++s1);
      *(++s2);
    }
  return (0);
}
