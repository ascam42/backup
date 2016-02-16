/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/ungaro_l/rendu/Piscine_C_J08/ex_04
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Oct  7 10:44:34 2015 Luca Ungaro
** Last update Thu Nov 26 10:22:41 2015 Luca Ungaro
*/

#include <stdlib.h>

int	my_char_isalphanum(char c)
{
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return (1);
  if (c >= '0' && c <= '9')
    return (12);
  else
    return (0);
}

int	my_words_nb(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i])
    {
      if (!my_char_isalphanum(str[i]) && my_char_isalphanum(str[i -1])
	  && i > 0)
	nb += 1;
      i += 1;
    }
  return (nb + 1);
}

char	*my_strncpy_alpha(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = 0;
  while (!my_char_isalphanum(src[i]))
    i += 1;
  j = 0;
  while (i < n)
    {
      dest[j] = src[i];
      i += 1;
      j += 1;
    }
  dest[j] = '\0';
  return (dest);
}

char	**assign_wordtab(char *str, char **array)
{
  int	i;
  int	w_n;
  int	l_sep;

  i = 0;
  w_n = 0;
  l_sep = 0;
  while (str[i])
    {
      if ((!my_char_isalphanum(str[i]) && my_char_isalphanum(str[i -1])
	   && i > 0) || (str[i + 1] == '\0' && my_char_isalphanum(str[i])))
	{
	  array[w_n] = (char *)malloc((i - l_sep) * sizeof(char));
	  if (array != NULL)
	    my_strncpy_alpha(array[w_n], (char *)(str + l_sep),
			     (i - l_sep) + (str[i + 1] ? 0 : 1));
	  w_n += 1;
	  l_sep = i;
	}
      i += 1;
    }
  array[w_n] = 0;
  return (array);
}

char	**my_str_to_wordtab(char *str)
{
  char	**array;

  if (!str)
    return (0);
  array = (char **)malloc(my_words_nb(str) * sizeof(char *) + 1);
  if (array != NULL)
    array = assign_wordtab(str, array);
  return (array);
}
