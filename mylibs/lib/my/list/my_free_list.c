/*
** my_free_list.c for bistro in /home/ungaro_l/rendu/Piscine_C_bistromathique
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Fri Oct 30 18:39:10 2015 Luca Ungaro
** Last update Wed Dec  2 11:43:58 2015 Luca Ungaro
*/

#include "list.h"

void		my_free_list(t_list *list)
{
  t_list	*tmp;

  while (list && list->data)
    {
      tmp = list;
      list = list->next;
      if (tmp->data)
	free(tmp->data);
      free(tmp);
    }
  free(list);
}

void		my_free_list_fct(t_list *list, void (*free_node)(t_list *node))
{
  t_list	*tmp;

  while (list)
    {
      tmp = list;
      list = list->next;
      free_node(tmp);
    }
  free_node(list);
}
