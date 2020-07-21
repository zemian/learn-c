// https://www.tutorialspoint.com/cprogramming/c_functions.htm

/*
return_type function_name( parameter list ) {
   body of the function
}
*/


#include <stdio.h>


/* NOTE that function must defined before use, or you need at least provide function declaration */ 
/* function declaration */
// NOTE: Parameter names are not important in function declaration only their type is required, so the following is also a valid declaration −
// int max(int num1, int num2);
int max(int, int);


int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;
 
   /* calling a function to get max value */
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 
   return 0;
}

/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
 