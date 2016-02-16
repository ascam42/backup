/*
** sum_params.c for sum_params in /home/ungaro_l/rendu/Piscine_C_J08/ex_02
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Oct  7 21:02:48 2015 Luca Ungaro
** Last update Thu Nov 26 10:23:10 2015 Luca Ungaro
*/

#include <stdlib.h>
#include "libmy.h"

int	my_get_len_ttal(int argc, char **argv)
{
  int	i;
  int	len;

  i = 0;
  len = 0;
  while (i < argc)
    {
      len += my_strlen(argv[i]);
      i += 1;
    }
  return (len + argc);
}

char	*sum_params(int argc, char **argv)
{
  int	i;
  int	len_ttal;
  char	*sum;

  i = 0;
  len_ttal = my_get_len_ttal(argc, argv);
  sum = (char *)malloc(len_ttal * sizeof(char));
  if (sum != NULL)
    {
      while (i < argc)
	{
	  (void)my_strlcat(sum, argv[i], len_ttal);
	  if (i != argc - 1)
	    (void)my_strlcat(sum, "\n", len_ttal);
	  i += 1;
	}
    }
  return (sum);
}
