/*
** error_test.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Tue Dec 15 15:24:26 2015 Lucas DEBOUTE
** Last update Tue Mar 29 05:51:09 2016 Lucas Debouté
*/

#include "struct.h"
#include "functions.h"

int	if_file_is_readable(t_filemap *filemap, char *pathname)
{
  filemap->fd = open(pathname, O_RDONLY);
  if (filemap->fd == -1)
    {
      my_putstr_stderr("Error : Impossible to read file\n");
      return (1);
    }
  return (0);
}

int	pre_error_test(int argc, char **argv, t_filemap *filemap)
{
  if (argc != 2)
    {
      my_putstr_stderr("Error : Invalid number of argument\n");
      return (1);
    }
  if ((filemap->fd = if_file_is_readable(filemap, argv[1])) == 1)
    return (1);
  return (0);
}
