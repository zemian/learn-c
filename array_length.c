#include <stdio.h>

int main(void) {
  int a[] = {1,2,3};
  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    printf("%d", a[i]);
  }
  return 0;
}
