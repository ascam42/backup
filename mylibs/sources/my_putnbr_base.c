/*
** my_putnbr_base.c for my_putnbr_base in /home/ungaro_l/rendu/Piscine_C_J06
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Oct  5 16:25:42 2015 Luca Ungaro
** Last update Thu Oct  8 09:06:41 2015 Luca Ungaro
*/

int	my_putnbr_base(int nb, char *base)
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
