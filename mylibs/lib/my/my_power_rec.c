/*
** my_power_rec.c for my_power_rec in /home/ungaro_l/rendu/Piscine_C_J05
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Fri Oct  2 10:34:59 2015 Luca Ungaro
** Last update Fri Oct  2 13:29:26 2015 Luca Ungaro
*/

int	my_power_rec(int nb, int power)
{
  if (power < 0 || nb > 2147483647)
    return (0);
  if (power == 0)
    return (1);
  return (nb * my_power_rec(nb, power - 1));
}
