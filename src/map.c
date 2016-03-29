/*
** map.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Wed Dec 16 00:44:20 2015 Lucas DEBOUTE
** Last update Tue Mar 29 05:51:44 2016 Lucas Debouté
*/

#include "functions.h"

char	**fill_map(t_filemap *filemap, char **map, char *buffer)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while (buffer[i] != '\n')
    i += 1;
  i += 1;
  while (j != filemap->row)
    {
      while (k != filemap->col)
	{
	  map[j][k] = buffer[i];
	  i += 1;
	  k += 1;
	}
      k = 0;
      j += 1;
    }
  return (map);
}
