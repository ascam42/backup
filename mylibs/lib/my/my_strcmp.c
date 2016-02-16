/*
** my_strcmp.c for my_strcmp in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 11:21:15 2015 Luca Ungaro
** Last update Tue Nov 24 13:27:22 2015 Luca Ungaro
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	diff;

  i = 0;
  diff = 0;
  while (s1[i] && s2[i])
    {
      diff = s1[i] - s2[i];
      if (diff != 0)
	return (diff);
      i += 1;
    }
  if ((!s1[i] && s2[i]) || (s1[i] && !s2[i]))
    diff = s1[i] - s2[i];
  return (diff);
}
