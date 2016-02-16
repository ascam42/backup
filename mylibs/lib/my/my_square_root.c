/*
** my_square_root.c for my_square_root in /home/ungaro_l/rendu/Piscine_C_J05
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Fri Oct  2 10:42:51 2015 Luca Ungaro
** Last update Fri Oct  2 10:45:50 2015 Luca Ungaro
*/

int	my_square_root(int nb)
{
  int	root;

  root = 0;
  while (root < nb)
    {
      if (root * root == nb)
	return (root);
      ++root;
    }
  return (0);
}
