#include <stdio.h>

/* print conversion tables
    for 0, 20, ..., 300 */
main()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;    /* lower limit of temperature table */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */
  
  /* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
  fahr = lower;
  printf("Fahrenheit Celsius\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%5.0f %11.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  
  /* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300 */
  celsius = lower;
  printf("Celsius Fahrenheit\n");
  while (celsius <= upper) {
    fahr = ((9.0/5.0) * celsius) + 32.0;
    printf("%5.0f %11.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  
}
