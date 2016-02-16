/*
** my_sort_int_tab.c for my_sort_int_tab in /home/ungaro_l/rendu/Piscine_C_J04
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Oct  1 16:23:36 2015 Luca Ungaro
** Last update Thu Oct  1 17:14:46 2015 Luca Ungaro
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	j;
  int	tmp;

  i = 0;
  while (i < size)
    {
      j = 0;
      while (j < size - 1)
	{
	  if (tab[j + 1] < tab[j])
	    {
	      tmp = tab[j];
	      tab[j] = tab[j + 1];
	      tab[j + 1] = tmp;
	    }
	  ++j;
	}
      ++i;
    }
}
