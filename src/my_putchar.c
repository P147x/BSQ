/*
** my_putchar.c for bsq in /home/debout_l/rendu/CPE_2015_BSQ
** 
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
** 
** Started on  Tue Dec 15 15:10:11 2015 Lucas DEBOUTE
** Last update Tue Dec 15 15:17:28 2015 Lucas DEBOUTE
*/

#include "functions.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
