/*
** my_putstr.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
** 
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
** 
** Started on  Tue Dec 15 15:11:44 2015 Lucas DEBOUTE
** Last update Tue Dec 15 16:52:53 2015 Lucas DEBOUTE
*/

#include "functions.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i += 1;
  write(1, str, i);
}
