#include <stdio.h>


main()
{
/* copy input to output; 1st version */
  int c;
  
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  
/* copy input to output; 2nd version */
  while ((c = getchar()) != EOF)
    putchar(c);
    printf("%i",c);
    
/* copy input to output; 2nd version with qetchar() != EOF is 0 or 1 */
  while (c = getchar() != EOF)
    putchar(c);
    printf("%i",c);
    printf("%i",EOF);
    
}
