/*
** read_file.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Tue Dec 15 16:29:32 2015 Lucas DEBOUTE
** Last update Tue Mar 29 05:51:22 2016 Lucas Debouté
*/

#include "functions.h"

char	*read_file(t_filemap *filemap, char *filepath, char *buffer)
{
  filemap->fd = open(filepath, O_RDONLY);
  read(filemap->fd, buffer, filemap->sbsize);
  buffer[filemap->sbsize] = '\0';
  return (buffer);
}
