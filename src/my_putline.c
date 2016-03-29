/*
** my_putline.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
** 
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
** 
** Started on  Wed Dec 16 03:00:03 2015 Lucas DEBOUTE
** Last update Tue Mar 29 05:50:46 2016 Lucas Debouté
*/

#include "functions.h"

void	my_putline(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n')
    i += 1;
  write(1, str, i);
}
