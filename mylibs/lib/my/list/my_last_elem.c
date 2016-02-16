/*
** my_last_elem.c for libmy in /home/ungaro_l/rendu/C_prog_elem/CPE_2015_Pushswap
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Nov  4 13:19:28 2015 Luca Ungaro
** Last update Wed Dec  2 10:55:50 2015 Luca Ungaro
*/

#include "list.h"

t_list		*my_last_elem(t_list *list)
{
  t_list	*ret;

  if (list)
    {
      while (list->next)
	list = list->next;
      ret = list;
    }
  return (ret);
}

t_list		*my_get_root(t_list *list)
{
  t_list	*ret;

  if (list)
    {
      while (list->next && list->data)
	list = list->next;
      ret = list;
    }
  return (ret);
}
