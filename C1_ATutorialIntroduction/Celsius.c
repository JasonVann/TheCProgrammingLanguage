#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  /*
  lower = 0;
  upper = 300;
  step = 20;
  */
  
  fahr = LOWER;
  int c = getchar();
  putchar(c);
  printf("Fahrenheit-Celsius table\n");
      
  while(fahr <= UPPER){
    celsius = 5/9.0 * (fahr - 32);
    printf("%3.0f\t%6.2f\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}

    
      
