/*
** get_xy.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Tue Dec 15 16:09:32 2015 Lucas DEBOUTE
** Last update Tue Dec 15 16:11:46 2015 Lucas DEBOUTE
*/

#include "functions.h"

void	get_xy(t_filemap *filemap, char *buffer)
{
  char	*tmp;
  int	i;
  int	j;

  tmp = malloc(sizeof(char) * filemap->sbsize);
  i = 0;
  j = 0;
  while (buffer[i] != '\n')
    {
      tmp[i] = buffer[i];
      i += 1;
    }
  tmp[i] = '\0';
  i += 1;
  filemap->row = my_getnbr(tmp);
  while (buffer[i] != '\n')
    {
      i += 1;
      j += 1;
    }
  filemap->col = j + 1;
  free(tmp);
}
