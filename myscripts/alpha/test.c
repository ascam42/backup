/*
** test.c for test in /home/ungaro_l/rendu/Igraph/alphachannel_2020
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Dec 16 16:00:13 2015 Luca Ungaro
** Last update Wed Dec 16 16:03:24 2015 Luca Ungaro
*/

#include <unistd.h>
#include <lapin.h>

#define WIDTH	1920
#define HEIGHT	1080

typedef struct	s_bunny_square
{
  int		x;
  int		y;
  int		width;
  int		height;
}		t_bunny_square;

typedef struct		s_data
{
  t_bunny_window	*win;
  t_bunny_pixelarray	*pix;
}			t_data;

t_bunny_response	mainloop(void *data)
{
  t_bunny_position	pos;
  t_bunny_square	sq;
  t_color		*color;

  sq.x = rand() % WIDTH;
  sq.y = rand() % HEIGHT;
  sq.width = rand() % WIDTH - sq.x;
  sq.height = rand() % HEIGHT - sq.y;
  square(((t_data *)(data))->pix, &sq, rand());
  bunny_blit(&((t_data *)(data))->win->buffer,
	     &((t_data *)(data))->pix->clipable, NULL);
  bunny_display(((t_data *)(data))->win);
  return (GO_ON);
}

int			main(int argc, char **argv)
{
  t_bunny_window	*wind;
  t_bunny_pixelarray	*pix;
  t_data		data;
  int			i;

  wind = bunny_start(WIDTH, HEIGHT, 1, "Menthe a l'eau!");
  pix = bunny_new_pixelarray(WIDTH, HEIGHT);
  i = 0;
  while (i < pix->clipable.clip_width * pix->clipable.clip_height)
    ((unsigned int*)(pix)->pixels)[i++] = 0xFFFFFFFF;
  bunny_set_loop_main_function(mainloop);
  data.win = wind;
  data.pix = pix;
  bunny_loop(wind, 100, &data);
  bunny_delete_clipable(&pix->clipable);
  bunny_stop(wind);
  return (0);
}
