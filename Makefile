##
## Makefile for bsq in /home/debout_l/rendu/CPE_2015_BSQ
##
## Made by Lucas DEBOUTE
## Login   <debout_l@epitech.net>
##
## Started on  Tue Dec  1 18:45:27 2015 Lucas DEBOUTE
## Last update Tue Mar 29 05:54:29 2016 Lucas Debouté
##

CC	= gcc

RM	= rm -f

CFLAGS	= -g -W -Wall -Wextra -I./include

SRCS 	= src/bsq.c			\
	  src/my_putchar.c 		\
	  src/my_putstr.c 		\
	  src/my_putline.c 		\
	  src/my_putstr_stderr.c 	\
	  src/structure_functions.c 	\
	  src/error_test.c 		\
	  src/stat_sof.c 		\
	  src/malloc_functions.c 	\
	  src/read_file.c 		\
	  src/get_xy.c 			\
	  src/my_getnbr.c 		\
	  src/map.c 			\
	  src/free_map.c 		\
	  src/algorithm.c 		\
	  src/map_writer.c

OBJS	= $(SRCS:.c=.o)

NAME	= bsq

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
