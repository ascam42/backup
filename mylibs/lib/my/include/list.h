/*
** list.h for lib in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_ls
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Nov 24 13:19:36 2015 Luca Ungaro
** Last update Wed Dec  2 11:44:04 2015 Luca Ungaro
*/

#ifndef LIST_H_
# define LIST_H_
# include "libmy.h"

/*
** Following structure can define either :
**   - Linear linked list (simple or double)
**   - Circle linked list (simple or double)
**
** For simple lists, prev elem shall be ignored (even removed afterwords)
**
** For linear linked list, root node shall be initialized with NULL value
**  and 'list' functions family shall be used.
**
** For circular lists, root node SHALL BE ALLOCATED, with my_create_root().
**  It will be the VERY LAST ELEM of the list. 'Circle' functions family
**  shall be used.
**
** Obviously, each type of list needs to be freed. If data can be freed in
**  one row, use my_free_list(). Else, a pointer to a function that properly
**  frees a node and its data shall be passed as a parameter to
**  my_free_list_fct().
*/
typedef struct	s_list
{
  void		*data;
  struct s_list	*prev;
  struct s_list	*next;
}		t_list;

/*
** my_put_in_list.c
*/
int	my_put_in_end_dblist(t_list **list, void *data);
int	my_put_in_dblist(t_list **list, void *data);
int	my_put_in_end_list(t_list **list, void *data);
int	my_put_in_list(t_list **list, void *data);
/*
** my_put_in_circ.c
*/
t_list	*my_create_root(void);
int	my_put_in_end_dbcirc(t_list **list, void *data);
int	my_put_in_dbcirc(t_list **list, void *data);
int	my_put_in_end_circ(t_list **list, void *data);
int	my_put_in_circ(t_list **list, void *data);
/*
** my_show_list.c
*/
void	my_show_list(t_list *list);
/*
** my_free_list.c
*/
void	my_free_list(t_list *list);
void	my_free_list_fct(t_list *list, void (*free_node)(t_list *node));
/*
** my_last_elem.c
*/
t_list	*my_last_elem(t_list *list);
t_list	*my_get_root(t_list *list);

#endif /* !LIST_H_ */
