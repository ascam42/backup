/*
** my_strcmp.c for my_strcmp in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 11:21:15 2015 Luca Ungaro
** Last update Tue Oct 20 14:57:43 2015 Luca Ungaro
*/

int	my_strcmp(char *s1, char *s2)
{
  int	diff;

  diff = 0;
  while (*s1 && *s2)
    {
      diff = *s1 - *s2;
      if (diff != 0)
	return (diff);
      *(++s1);
      *(++s2);
    }
  if ((!*s1 && *s2) || (*s1 && !*s2))
    diff = *s1 - *s2;
  return (diff);
}
