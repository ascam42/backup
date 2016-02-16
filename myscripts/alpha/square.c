/*
** square.c for square in /home/ungaro_l/rendu/Igraph/alphachannel_2020
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Dec 16 10:16:45 2015 Luca Ungaro
** Last update Wed Dec 16 15:42:51 2015 Luca Ungaro
*/

#include <lapin.h>

typedef struct	s_bunny_square
{
  int		x;
  int		y;
  int		width;
  int		height;
}		t_bunny_square;

void		tekpixel(t_bunny_pixelarray	*pix,
			 t_bunny_position	*pos,
			 unsigned int		color)
{
  unsigned int	pixel_nb;

  pixel_nb = (pos->y * pix->clipable.clip_width) + pos->x;
  ((unsigned int *)(pix)->pixels)[pixel_nb] = color;
}

unsigned int	tekgetpixel(t_bunny_pixelarray *pix,
			    t_bunny_position *pos)
{
  unsigned int	pixel;
  unsigned int	ret_color;

  pixel = (pos->y * pix->clipable.clip_width) + pos->x;
  ret_color = (((unsigned int *)(pix)->pixels)[pixel]);
  return (ret_color);
}

unsigned int		get_new_color(t_bunny_pixelarray	*pix,
				      t_bunny_position		pos,
				      unsigned int		color)
{
  int			i;
  t_color		old;
  t_color		cur;
  t_color		new;
  double		prop;

  i = 0;
  old.full = color;
  cur.full = tekgetpixel(pix, &pos);
  prop = (double)(old.argb[ALPHA_CMP]) / 255.0;
  while (i < 4)
    {
      new.argb[i] = (cur.argb[i] * (1 - prop)) + (old.argb[i] * prop);
      i += 1;
    }
  return (new.full);
}

void			square(t_bunny_pixelarray	*pix,
			       t_bunny_square		*squ,
			       unsigned int		color)
{
  t_bunny_position	cur;

  cur.y = squ->y;
  while (cur.y < squ->y + squ->height)
    {
      cur.x = squ->x;
      while (cur.x  < squ->x + squ->width)
	{
	  tekpixel(pix, &cur, get_new_color(pix, cur, color));
	  cur.x += 1;
	}
      cur.y += 1;
    }
}
