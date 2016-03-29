/*
** stat_sof.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Tue Dec 15 16:20:06 2015 Lucas DEBOUTE
** Last update Tue Dec 15 16:59:38 2015 Lucas DEBOUTE
*/

#include "functions.h"

int	stat_sof(t_filemap *filemap, char *filepath, struct stat *sb)
{
  if (stat(filepath, sb) == -1)
    return (1);
  filemap->sbsize = sb->st_size;
  return (0);
}
