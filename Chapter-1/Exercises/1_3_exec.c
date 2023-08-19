#include <stdio.h>

main() {
  int max, step;

  max = 300;
  step = 20;

  printf("Fahrenheit\tCelsius\n");
  for (int i = 0; i <= max; i+= step) {
    printf("%d\t\t%.1f\n", i, (5.0 / 9.0 * (i - 32)));
  }

  printf("\nCelsius\tFahrenheit\n");
  for (int i = 0; i <= max; i+= step) {
    printf("%d\t\t%.1f\n", i, (32.0 + (9.0*i/5.0)));
  }
}