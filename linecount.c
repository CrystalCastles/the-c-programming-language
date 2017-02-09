#include <stdio.h>

main()
{
  int c, n1, b1, nw;
  
  n1 = 0;
  b1 = 0;
  nw = 0;
  while ((c = getchar()) != EOF){
    if (c == '\n')
      ++n1;
    if (c == ' ')
      ++b1;
    if (c == '\t')
      ++nw;
  }
  printf("Number of new lines is %d\n", n1);
  printf("Number of blanks is %d\n", b1);
  printf("Number of tabs is %d\n", nw);
}
