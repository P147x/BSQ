/*
** my_getnbr.c for my_getnbr in /home/debout_l/rendu/Piscine_C_J04
**
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
**
** Started on  Tue Oct  6 10:46:34 2015 Lucas DEBOUTE
** Last update Tue Dec 15 23:52:47 2015 Lucas DEBOUTE
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;
  int	n;

  nbr = 0;
  i = 0;
  n = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	n = n + 1;
      i = i + 1;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      nbr = (nbr * 10) + str[i] - '0';
      i = i + 1;
    }
  if (n % 2 == 1)
    return (nbr * (-1));
  return (nbr);
}
