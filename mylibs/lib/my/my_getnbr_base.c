/*
** my_getnbr_base.c for my_getnbr_base in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 17:28:00 2015 Luca Ungaro
** Last update Wed Oct 28 16:41:50 2015 Luca Ungaro
*/

#include <unistd.h>
#include "libmy.h"

int	my_getnbr_base(char *str, char *base)
{
  int	i;
  int	nb;
  int	sign;
  int	idx;

  i = 0;
  nb = 0;
  sign = 1;
  while (my_charstr(base, str[i]) == NULL)
    {
      sign *= (str[i] == '-') ? -1 : 1;
      i += 1;
    }
  while (my_charstr(base, str[i]) != NULL)
    {
      nb *= my_strlen(base);
      idx = 0;
      while (base[idx] != str[i])
	idx += 1;
      nb += idx;
      if (nb % my_strlen(base) != idx)
      	return (0);
      i += 1;
    }
  return (nb * sign);
}
