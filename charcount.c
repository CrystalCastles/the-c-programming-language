#include <stdio.h>

main ()
{
  /* count characters in input; 1st version */
  long nc;
  
  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
  
  /* count characters in input; 1st version */
  double nc;
  
  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}
