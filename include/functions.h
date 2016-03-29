/*
** functions.h for bsq in /home/debout_l/rendu/CPE_2015_BSQ/include
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Tue Dec 15 15:15:52 2015 Lucas DEBOUTE
** Last update Tue Dec 15 16:01:16 2015 Lucas DEBOUTE
*/

#ifndef FUNCTIONS_H_
# define FUNCTIONS_H_

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "struct.h"

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putline(char *str);
void	my_putstr_stderr(char *str);
void	get_xy(t_filemap *filemap, char *buffer);
int	if_file_is_readable(t_filemap *filemap, char *pathname);
int	pre_error_test(int argc, char **argv, t_filemap *filemap);
char	**fill_map(t_filemap *filemap, char **map, char *buffer);
int	my_getnbr(char *str);
int	stat_sof(t_filemap *filemap, char *filepath, struct stat *sb);
char	*malloc_buffer(t_filemap *filemap);
char	**malloc_map(t_filemap *filemap);
char	*read_file(t_filemap *filemap, char *filepath, char *buffer);
void	square_test(t_filemap *filemap, char **map);
void	map_writer(t_filemap *filemap, char **map, int x, int y);
void	free_map(t_filemap *filemap, char **map);

#endif /* FUNCTIONS_H_ */
