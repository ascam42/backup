/*
** my_stralloc.c for lib in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_ls/lib/my
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Nov 24 11:00:20 2015 Luca Ungaro
** Last update Wed Nov 25 11:41:15 2015 Luca Ungaro
*/

#include <stdarg.h>
#include "libmy.h"

void	my_stralloc_extra(char **str_addr, va_list elem, int str_nb)
{
  int	i;
  char	*ret;
  char	*tmp;

  i = 0;
  ret = *str_addr;
  ret[0] = '\0';
  while (i++ < str_nb)
    {
      tmp = va_arg(elem, char *);
      ret = my_strcat(ret, tmp);
    }
}

char		*my_stralloc(int str_nb, ...)
{
  int		i;
  int		len;
  va_list	elem;
  char		*tmp;
  char		*ret;

  i = 0;
  len = 0;
  va_start(elem, str_nb);
  while (i++ < str_nb)
    {
      tmp = va_arg(elem, char *);
      len += my_strlen(tmp);
    }
  va_end(elem);
  ret = malloc(len + 1);
  if (ret != NULL)
    {
      va_start(elem, str_nb);
      my_stralloc_extra(&ret, elem, str_nb);
      va_end(elem);
      ret[len] = '\0';
    }
  return (ret);
}

void	my_stralloc_extra_not_repeat(char **str_addr, va_list elem, int str_nb)
{
  int	i;
  int	j;
  char	*ret;
  char	*tmp;

  i = 0;
  ret = *str_addr;
  ret[0] = '\0';
  while (i++ < str_nb)
    {
      tmp = va_arg(elem, char *);
      j = 0;
      while (ret[j])
	j += 1;
      if (ret[j - 1] == tmp[0])
	ret = my_strcat(ret, tmp + 1);
      else
	ret = my_strcat(ret, tmp);
    }
}

char		*my_stralloc_not_repeat(int str_nb, ...)
{
  int		i;
  int		len;
  va_list	elem;
  char		*tmp;
  char		*ret;

  i = 0;
  len = 0;
  va_start(elem, str_nb);
  while (i++ < str_nb)
    {
      tmp = va_arg(elem, char *);
      len += my_strlen(tmp);
    }
  va_end(elem);
  ret = malloc(len + 1);
  if (ret != NULL)
    {
      va_start(elem, str_nb);
      my_stralloc_extra_not_repeat(&ret, elem, str_nb);
      va_end(elem);
      ret[len] = '\0';
    }
  return (ret);
}
