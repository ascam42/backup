/*
** my_puterr.c for my_puterr in /home/ungaro_l/mylibs/sources
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct 19 11:24:27 2015 Luca Ungaro
** Last update Mon Oct 19 11:25:07 2015 Luca Ungaro
*/

int	my_puterr(char *str)
{
  write(2, str, my_strlen(str));
  return (0);
}
