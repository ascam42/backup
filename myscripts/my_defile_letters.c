/*
** my_defile_letters.c for perso_defile_letters in /home/ungaro_l/myscripts
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Sat Oct 10 20:44:08 2015 Luca Ungaro
** Last update Sun Oct 11 11:51:01 2015 Luca Ungaro
*/

#include <unistd.h>

char	*my_initialize_str(char *src)
{
  int	i;
  int	len;
  char	c;
  char	*dest;

  i = 0;
  len = my_strlen(src);
  c = ' ';
  dest = my_strdup(src);
  while (i < len)
    {
      dest[i] = c;
      c = c + 1;
      i = i + 1;
    }
  return (dest);
}

int	my_print_sympa(char *str, int time)
{
  int	i;
  int	len;
  int	done;
  char	*moving;

  i = 0;
  len = my_strlen(str);
  done = 0;
  moving = my_initialize_str(str);
  while (!done)
    {
      my_putstr(moving);
      i = 0;
      while (i < len)
	{
	  if (moving[i] != str[i])
	    moving[i] = (moving[i] == '~') ? ' ' : moving[i] + 1;
	  i = i + 1;
	}
      if (my_strcmp(str, moving) == 0)
	done = 1;
      my_putchar('\r');
      usleep(time);
    }
  my_putstr(moving);
}

int	main(int argc, char **argv)
{
  int	time;
  if (argc != 2 && argc!= 3)
    {
      my_putstr("Usage : ");
      my_putstr(argv[1]);
      my_putstr(" string [time]\n");
    }
  else
    {
      if (argc == 3)
	time = my_getnbr(argv[2]);
      else
	time = 30000;
      my_print_sympa(argv[1], time);
    }
    /* my_putchar('\n'); */
    return (0);
}
