/*
** my.h for my_h in /home/ungaro_l/rendu/Piscine_C_J09/include
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Oct  8 09:01:11 2015 Luca Ungaro
** Last update Wed Nov 25 11:37:02 2015 Luca Ungaro
*/

#ifndef LIBMY_H_
# define LIBMY_H_
# include "my_printf.h"
# include "list.h"

int	my_putchar(char c);
int	my_putstr(char *str);
int	my_puterr(char *str);
int	my_strlen(char *str);
int	my_putnbr(int nb);
int	my_getnbr(char *str);
int	my_factorielle_rec(int nb);
int	my_find_prime_sup(int nb);
int	my_getnbr_base(char *str, char *base);
int	my_isneg(int n);
int	my_is_prime(int nb);
int	my_power_rec(int nb, int power);
int	my_putnbr_base(int nb, char *base);
int	my_showstr(char *str);
int	my_show_wordtab(char **tab);
int	my_square_root(int nb);
int	my_strcmp(char *s1, char *s2);
int	my_str_isalpha(char *str);
int	my_str_islower(char *str);
int	my_str_isnum(char *str);
int	my_str_isprintable(char *str);
int	my_str_isupper(char *str);
int	my_strlcat(char *dest, char *src, int size);
int	my_strncmp(char *s1, char *s2, int n);
int	my_swap(int *a, int *b);
int	my_sort_wordtab(char **tab);
int	my_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));
char	*my_getstr(int nb);
char	*my_strcapitalize(char *str);
char	*my_revstr(char *str);
char	*sum_params(int argc, char **argv);
char	*my_evil_str(char *str);
char	*my_strcat(char *dest, char *src);
char	*my_strcpy(char *dest, char *src);
char	*my_strdup(char *src);
char	*my_stralloc(int nb_str, ...);
char	*my_stralloc_not_repeat(int str_nb, ...);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char *src, int nb);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strstr(char *str, char *to_find);
char	*my_charstr(char *str, char to_find);
char	*my_strupcase(char *str);
char	**my_str_to_wordtab(char *str);
void	my_sort_int_tab(int *tab, int size);
void	my_swap_str(char **str1, char **str2);
void	my_putfloat(float nb);

#endif	/* !LIBMY_H_ */
