/*
** my_show_list.c for libmy in /home/ungaro_l/rendu/C_prog_elem/CPE_2015_Pushswap
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Nov  4 10:54:25 2015 Luca Ungaro
** Last update Wed Dec  2 11:03:07 2015 Luca Ungaro
*/

#include "list.h"

void	my_show_list(t_list *list)
{
  while (list != NULL)
    {
      my_putstr(list->data);
      my_putchar('\n');
      list = list->next;
    }
}
