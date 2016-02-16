/*
** my_swap.c for my_swap in /home/ungaro_l/rendu/Piscine_C_J04
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Oct  1 09:04:17 2015 Luca Ungaro
** Last update Tue Nov 24 11:59:48 2015 Luca Ungaro
*/

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
  return (0);
}
