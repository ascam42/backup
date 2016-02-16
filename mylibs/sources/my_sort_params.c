/*
** my_sort_params.c for my_sort_params in /home/ungaro_l/rendu/Piscine_C_J07/ex_06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Oct  6 10:28:42 2015 Luca Ungaro
** Last update Thu Oct 22 11:49:48 2015 Luca Ungaro
*/

char	**my_sort_params(int argc, char **argv, int len_max)
{
  int	i;

  i = 0;
  while (i < argc - 1)
    {
      if (my_strcmp(argv[i], argv[i + 1]) > 0)
	{
	  my_swap_str(&argv[i], &argv[i + 1]);
	  i = 0;
	}
      i += 1;
    }
  return (argv);
}
