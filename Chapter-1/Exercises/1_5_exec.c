#include <stdio.h>

#define MAX 300
#define STEP 20

main() {

  printf("%3s %15s", "Fahrenheit", "Celsius\n");
  for(int i = MAX; i >= 0; i-= STEP)
    printf("%3d %18.1f\n", i, ((i - 32.0) * 5.0/9.0));

  return 0;
}