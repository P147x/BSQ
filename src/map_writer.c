/*
** map_writer.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Wed Dec 16 13:54:55 2015 Lucas DEBOUTE
** Last update Wed Dec 16 13:54:56 2015 Lucas DEBOUTE
*/

#include "functions.h"
#include "struct.h"

int	square_printer(t_filemap *filemap, int x)
{
  int	i;

  i = 0;
  while (i != filemap->max_squaresize)
    {
      my_putchar('x');
      i += 1;
      x += 1;
    }
  return (x);
}

int	rest_of_map_printer(int x, int y, char **map)
{
  my_putchar(map[y][x]);
  x += 1;
  return (x);
}

void	map_writer(t_filemap *filemap, char **map, int x, int y)
{
  int	square_rest;

  square_rest = 0;
  while (y != filemap->row)
    {
      while (x != filemap->col)
	{
	  if (x == filemap->init_x && y == filemap->init_y)
	    {
	      x = square_printer(filemap, x);
	      square_rest = filemap->max_squaresize - 1;
	    }
	  if (square_rest > 0 && x == filemap->init_x)
	    {
	      x = square_printer(filemap, x);
	      square_rest -= 1;
	    }
	  else
	    x = rest_of_map_printer(x, y, map);
	}
      x = 0;
      y += 1;
    }
}
