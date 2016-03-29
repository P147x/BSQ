/*
** malloc_functions.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Tue Dec 15 16:14:52 2015 Lucas DEBOUTE
** Last update Tue Dec 15 16:48:30 2015 Lucas DEBOUTE
*/

#include "functions.h"

char		*malloc_buffer(t_filemap *filemap)
{
  char		*buffer;

  buffer = malloc(sizeof(char *) * filemap->sbsize);
  return (buffer);
}

char		**malloc_map(t_filemap *filemap)
{
  char		**map;
  int		i;

  i = 0;
  map = malloc(sizeof(*map) * filemap->row);
  while (i != filemap->row)
    {
      map[i] = malloc(sizeof(**map) * filemap->col);
      i += 1;
    }
  return (map);
}
