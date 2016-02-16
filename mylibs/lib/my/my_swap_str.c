/*
** my_swap_str.c for lib in /home/ungaro_l/mylibs/sources
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Oct 14 13:44:56 2015 Luca Ungaro
** Last update Thu Nov 26 10:27:17 2015 Luca Ungaro
*/

void	my_swap_str(char **str1, char **str2)
{
  char	*tmp;

  tmp = *str1;
  *str1 = *str2;
  *str2 = tmp;
}
