/*
** my_put_nbr.c for my_put_nbr in /home/debout_l/rendu/PSU_2015_my_printf_bootstrap
** 
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
** 
** Started on  Fri Nov  6 15:58:44 2015 Lucas DEBOUTE
** Last update Wed Dec 16 04:30:06 2015 Lucas DEBOUTE
*/

int	my_put_nbr(int nb)
{
  int	i;

  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar('-');
    }
  i = 1;
  while ((nb / i) >= 10)
    i = i * 10;
  while (i > 0)
    {
      my_putchar((nb / i) % 10 + 48);
      i = i / 10;
    }
  return (0);
}
