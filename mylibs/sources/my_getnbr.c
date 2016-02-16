/*
** my_getnbr_opti.c for lib in /home/ungaro_l/mylibs/sources
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Oct 15 14:21:38 2015 Luca Ungaro
** Last update Thu Oct 15 15:07:11 2015 Luca Ungaro
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nb;
  int	sign;

  i = 0;
  nb = 0;
  sign = 1;
  while (str[i] > '9' || str[i] < '0')
    {
      sign *= (str[i] == '-') ? -1 : 1;
      i += 1;
    }
  while (str[i] <= '9' && str[i] >= '0')
    {
      nb *= 10;
      nb += str[i] - '0';
      if (nb % 10 != str[i] - '0')
	{
	  nb = 0;
	  str[i + 1] = '\0';
	}
      i += 1;
    }
  return (nb * sign);
}
