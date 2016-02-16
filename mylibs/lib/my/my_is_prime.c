/*
** my_is_prime.c for my_is_prime in /home/ungaro_l/rendu/Piscine_C_J05
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Fri Oct  2 10:50:30 2015 Luca Ungaro
** Last update Thu Oct  8 09:18:46 2015 Luca Ungaro
*/

int	my_is_prime(int nb)
{
  int	i;
  int	nb_div;

  i = 0;
  nb_div = 0;
  if (nb > 2147483647 || nb < 0)
    return (0);
  while (++i <= nb)
      nb_div += (nb % i) ? 0 : 1;
  if (nb_div == 2)
    return (1);
  else
    return (0);
}
