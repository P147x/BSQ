/*
** algorithm.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Wed Dec 16 03:07:42 2015 Lucas DEBOUTE
** Last update Wed Dec 16 03:07:47 2015 Lucas DEBOUTE
*/

#include "functions.h"

int	square_detection(t_filemap *filemap, int x, int y, char **map)
{
  while (x != filemap->max_x)
    {
    if (map[y][x] != '.')
      return (1);
      x += 1;
    }
  while (y != filemap->max_y)
    {
      if (map[y][x] != '.')
	return (1);
      y += 1;
    }
  while (x != filemap->init_x_temp)
    {
      if (map[y][x] != '.')
	return (1);
      x -= 1;
    }
  while (y != filemap->init_y_temp)
    {
      if (map[y][x] != '.')
	return (1);
      y -= 1;
    }
  return (0);
}

int	algorithm(t_filemap *filemap, char **map, int x, int y)
{
  int	actual_size;

  actual_size = 0;
  filemap->init_x_temp = x;
  filemap->init_y_temp = y;
  filemap->max_x = x;
  filemap->max_y = y;
  while (filemap->max_y != filemap->row)
    {
      actual_size += 1;
      if (square_detection(filemap, x, y, map) == 1)
	return (1);
      filemap->max_x += 1;
      filemap->max_y += 1;
      if (actual_size > filemap->max_squaresize)
	{
	  filemap->init_x = filemap->init_x_temp;
	  filemap->init_y = filemap->init_y_temp;
	  filemap->max_squaresize = actual_size;
	}
    }
  return (0);
}

void	square_test(t_filemap *filemap, char **map)
{
  int	y;
  int	x;

  x = 0;
  y = 0;
  while (filemap->row != y)
    {
      while (filemap->col!= x)
	{
	  if (map[y][x] == '.')
	    {
	      algorithm(filemap, map, x, y);
	    }
	  x += 1;
	}
      x = 0;
      y += 1;
    }
}
