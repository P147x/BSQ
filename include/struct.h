/*
** struct.h for bsq in /home/debout_l/rendu/CPE_2015_BSQ/include
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Tue Dec 15 15:36:12 2015 Lucas DEBOUTE
** Last update Tue Dec 15 16:38:30 2015 Lucas DEBOUTE
*/

#ifndef STRUCT_H_
# define STRUCT_H_

typedef struct	s_filemap
{
  int		fd;
  int		sbsize;
  int		col;
  int		row;

  int		max_squaresize;
  int		init_x;
  int		init_y;

  int		init_x_temp;
  int		init_y_temp;
  int		max_x;
  int		max_y;
} t_filemap;

#endif /* STRUCT_H_ */
