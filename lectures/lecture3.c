#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// This is from C23 it's dogshit anyways so don't use it unless you need to optimize tail call
_Noreturn void fun() {
  printf("\nsomething");
}

int main() {
  int num1 = 10, num2 = 20;
  printf("The maximum is: %d\n", MAX(num1, num2));
  fun();
  return 0;
}
