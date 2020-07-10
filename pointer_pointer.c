// https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm

/*
A variable that is a pointer to a pointer must be declared as such. This is 
done by placing an additional asterisk in front of its name. For example, 
the following declaration declares a pointer to a pointer of type int −

int **var
*/

#include <stdio.h>
 
int main () {

   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* take the address of var */
   ptr = &var;

   /* take the address of ptr using address of operator & */
   pptr = &ptr;

   /* take the value using pptr */
   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

   return 0;
}
