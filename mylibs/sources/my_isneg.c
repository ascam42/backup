/*
** my_isneg.c for my_isneg in /home/ungaro_l/rendu/Piscine_C_J03
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Sep 30 09:07:43 2015 Luca Ungaro
** Last update Wed Sep 30 17:36:42 2015 Luca Ungaro
*/

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return (0);
}
