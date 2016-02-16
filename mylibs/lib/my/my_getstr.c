/*
** my_getstr.c for eval_expr in /home/ungaro_l/rendu/Piscine_C_evalexpr
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Oct 22 11:19:15 2015 Luca Ungaro
** Last update Tue Nov 24 11:37:46 2015 Luca Ungaro
*/

#include <stdlib.h>

char	*my_getstr(int nb)
{
  int	len;
  int	tmp;
  char	*ret;

  len = (nb < 0) ? 1 : 0;
  tmp = nb / 10;
  while (tmp)
    {
      tmp /= 10;
      len += 1;
    }
  ret = (char *)malloc(len * sizeof(char));
  if (ret == NULL)
    return (NULL);
  ret[len] = '\0';
  ret[0] = (nb < 0) ? '-' : '0';
  nb = (nb < 0) ? (-1 * nb) : nb;
  while (len >= ((ret[0] == '-') ? 1 : 0))
    {
      ret[len--] = (nb % 10) + '0';
      nb /= 10;
    }
  return (ret);
}
