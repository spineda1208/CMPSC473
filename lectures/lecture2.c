#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
  int num1 = 10, num2 = 20;
  printf("The maximum is: %d\n", MAX(num1, num2));
  return 0;
}
