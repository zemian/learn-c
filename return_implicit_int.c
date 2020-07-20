#include <stdio.h>

int main(void) {
  printf("return value %d", test());
}

// If you don't use 'void' or use 'return', then the
// behavior is undefined! 
// see https://stackoverflow.com/questions/10079089/implicit-int-return-value-of-c-function
int test() {
	int i = 100;
	// do not use return value.
}
