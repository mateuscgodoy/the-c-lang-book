#include <stdio.h>

main ()
{
  int c, nl;

  nl = 0;
  while((c = getchar()) != 'Q')
  {
    if (c == '\n')
    {
      ++nl;
    }
  }
  printf("%d\n", nl);
}