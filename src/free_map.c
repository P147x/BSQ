/*
** free_map.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Sun Dec 20 22:38:12 2015 Lucas DEBOUTE
** Last update Sun Dec 20 22:38:19 2015 Lucas DEBOUTE
*/

#include "functions.h"

void	free_map(t_filemap *filemap, char **map)
{
  int	i;

  i = 0;
  while (i != filemap->row)
    {
      free(map[i]);
      i += 1;
    }
  free(map);
}
