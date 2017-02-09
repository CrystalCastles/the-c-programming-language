#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
main()
{
  int c, nl, nw, nc, state;
  
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
      printf("%d", getchar());
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
 
  /* 1-11 You can test for bugs with words of different lengths, ammount of spaces/tabs. Input with special characters and formats would most likely uncover bugs. */
  
}
