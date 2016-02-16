/*
** my_getnbr_base.c for my_getnbr_base in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 17:28:00 2015 Luca Ungaro
** Last update Thu Oct 22 11:49:27 2015 Luca Ungaro
*/

int	my_getnbr_base(char *str, char *base)
{
  int	i;
  int	nb;
  int	len;

  i = 0;
  nb = 0;
  len = my_strlen(base);
  while (str[i] > base[len] || str[i] < '0')
    {
      if (str[i + 1] == '\0')
	return (0);
      ++i;
    }
  while (str[i] <= base[len] && str[i] >= '0')
    {
      nb = (nb < 0) ? nb - (str[i] - '0') : nb + (str[i] - '0');
      if (((nb < 0) ? nb * -1 : nb) % len != str[i] - '0')
      	return (0);
      if (str[i + 1] <= base[len] && str[i + 1] >= '0')
	nb *= 10;
      if (str[i - 1] == '-')
	nb *= -1;
      ++i;
    }
  return (nb);
}
