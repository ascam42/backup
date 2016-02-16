/*
** main.c for crvor in /home/ungaro_l/rendu/UNIX_system/PSU_2015_minishell1/crvor
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Jan 11 16:35:51 2016 Luca Ungaro
** Last update Mon Jan 11 16:58:10 2016 Luca Ungaro
*/

#include "lapin.h"
#include "libmy.h"

void			play(char *sound_name, char *path, char *bin)
{
  t_bunny_effect	*actual;
  char			*sound_w_extension;

  sound_w_extension = my_stralloc_not_repeat(4, path, "/", sound_name, ".ogg");
  if (sound_w_extension)
    {
      actual = bunny_load_effect(sound_w_extension);
      if (actual)
	{
	  bunny_sound_play(actual);
	  sleep(5);
	  bunny_delete_sound(actual);
	}
      else
	my_fdprintf(2, "%s: '%s' not found\n", bin, sound_name);
    }
  else
    my_fdprintf(2, "%s: Ouf of memory.\n", bin);
}

int	main(int ac, char **av)
{
  if (ac > 2)
    play(av[1], av[2], av[0]);
  else
    my_fdprintf(2, "Usage: %s sound_name source_sounds_dir\n", av[0]);
  return (0);
}
