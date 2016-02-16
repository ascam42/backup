/*
** my_showmem.c for my_showmem in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Oct  6 20:31:55 2015 Luca Ungaro
** Last update Thu Oct  8 09:08:13 2015 Luca Ungaro
*/

#include <unistd.h>

int	my_long_long_putnbr_base(long long nb, char *base)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  if (nb > my_strlen(base))
    {
      my_putnbr_base(nb / my_strlen(base), base);
      my_putnbr_base(nb % my_strlen(base), base);
    }
  else
    {
      my_putchar(base[nb]);
    }
}

void	my_print_str_base(char *str, char *base)
{
  int	i;
  int	tmp;

  i = 0;
  while (i < 16 && str[i])
    {
      if (!(i % 2))
	my_putchar('\t');
      if (str[i] <= 15)
	my_putchar('0');
      my_putnbr_base((int)str[i], base);
      i += 1; 
    }
  tmp = i;
  while ((tmp % 2) ? i++ < 17 : i++ < 18)
    my_putchar((i % 2) ? 0 : '\t');
  i = 0;
  while (i < 16 && str[i])
    {
      if (str[i] < 32 || str[i] == 127)
	my_putchar('.');
      else
	my_putchar(str[i]);
      i += 1;
    }
}

int	my_showmem(char *str, int size)
{
  char	*hexa;
  int	i;

  hexa = "0123456789abcdef"; 
  i = 0;
  if (str == "" || str == NULL || size == 0)
    return (0);
  while (i < size)
    {
      my_long_long_putnbr_base((long long)(str + i), hexa);
      my_putchar(':');
      my_print_str_base(str + i, hexa);
      i += 16;
      my_putchar('\n');
    }
  return (0);
}
