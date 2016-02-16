/*
** my_sort_wordtab.c for my_sort_wordtab in /home/ungaro_l/rendu/Piscine_C_J10/ex_03
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Fri Oct  9 11:49:45 2015 Luca Ungaro
** Last update Wed Oct 14 13:44:30 2015 Luca Ungaro
*/

int	my_sort_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i + 1])
    {
      if (my_strcmp(tab[i], tab[i + 1]) > 0)
	{
	  my_swap_str(&tab[i], &tab[i + 1]);
	  i = -1;
	}
      i += 1;
    }
  return (0);
}
