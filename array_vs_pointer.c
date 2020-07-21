// https://www.programiz.com/c-programming/c-pointers-arrays

// An array is a block of sequential data. Let's write a program to print addresses of array elements.

/*
&x[0] = 0x7ffee261da50
&x[1] = 0x7ffee261da54
&x[2] = 0x7ffee261da58
&x[3] = 0x7ffee261da5c
Address of array x: 0x7ffee261da50%       
*/

#include <stdio.h>
int main() {

	int x[4];
	int i;

	for(i = 0; i < 4; ++i) {
		printf("&x[%d] = %p\n", i, &x[i]);
	}

	printf("Address of array x: %p", x);

	return 0;
}