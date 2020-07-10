// https://www.tutorialspoint.com/cprogramming/c_pointers.htm

/*
It is always a good practice to assign a NULL value to a pointer variable in 
case you do not have an exact address to be assigned. This is done at the 
time of variable declaration. A pointer that is assigned NULL is called a 
null pointer.
*/
#include <stdio.h>

int main () {

   int  *ptr = NULL;

   printf("The value of ptr is : %x\n", ptr  );
 
   return 0;
}

// Check for NULL pointer:
//
//    if(ptr)     /* succeeds if p is not null */
//    if(!ptr)    /* succeeds if p is null */
