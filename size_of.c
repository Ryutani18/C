#include <stdio.h>

int main(void) {
  int a[3] = {1,2,3};
  printf("%lu\n", sizeof(a)/sizeof(a[0]));
  return (0);
}