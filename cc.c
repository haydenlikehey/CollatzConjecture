#include <stdio.h>

void cc(long * b){

  int repCount = 0;
  long i = 1;
  long a = 0;

  while (a < 1000000000) {
    if (i == 1) {
      repCount++;
    }
    if (i % 2 == 0) {
      i /= 2;
      //printf("x ÷ 2: %d\n", i);
    }
    if (i % 2 != 0) {
      i = i * 3 + 1;
      //printf("3x + 1: %d\n", i);
    }
    if (*b < i) {
      *b = i;
      printf("New High Score: %d\n", i);
    }
    if (repCount = 6) {
      repCount = 0;
      a++;
      i = a;
    }
  }
}



int main() {

  printf("Calculating. Stand by...\n");

  long high = 1;
  char input;

  cc(&high);

  printf("Final peak: %d\nImpressed? 😏", high);

  scanf("\n", &input);

  return 0;
}
