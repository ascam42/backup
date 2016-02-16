/*
** my_factorielle_rec.c for my_factorielle_rec in /home/ungaro_l/rendu/Piscine_C_J05
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Fri Oct  2 09:24:26 2015 Luca Ungaro
** Last update Fri Oct  2 13:28:41 2015 Luca Ungaro
*/

int	my_factorielle_rec(int nb)
{
  if (nb < 0 || nb > 2147483647)
    return (0);
  if (nb == 0)
    return (1);
  return (nb * my_factorielle_rec(nb - 1));
}
