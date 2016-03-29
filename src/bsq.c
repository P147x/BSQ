/*
** bsq.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Tue Dec 15 15:10:56 2015 Lucas DEBOUTE
** Last update Tue Mar 29 05:50:33 2016 Lucas Debouté
*/

#include "struct.h"
#include "functions.h"

int		main(int argc, char **argv)
{
  t_filemap	filemap;
  struct stat	sb;
  char		*buffer;
  char		**map;
  int		x;
  int		y;

  x = 0;
  y = 0;
  if (pre_error_test(argc, argv, &filemap) == 1)
    return (1);
  filemap.max_squaresize = 0;
  stat_sof(&filemap, argv[1], &sb);
  buffer = malloc_buffer(&filemap);
  buffer = read_file(&filemap, argv[1], buffer);
  get_xy(&filemap, buffer);
  map = malloc_map(&filemap);
  map = fill_map(&filemap, map, buffer);
  filemap.max_squaresize = 0;
  square_test(&filemap, map);
  map_writer(&filemap, map, x, y);
  close(filemap.fd);
  free_map(&filemap, map);
  free(buffer);
  return (0);
}
