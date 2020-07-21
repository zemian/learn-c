// https://www.tutorialspoint.com/cprogramming/c_strings.htm

#include <stdio.h>
#include <string.h>

int main () {

	// Example #1
	// Note that '\0' is required for C string as last char!
	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

	// Or you may use string constant, (the '\0' is auto inserted)
	char greeting2[] = "Hello";

	printf("Greeting message: %s\n", greeting );
	printf("Greeting message2: %s\n", greeting2 );


	// Example #2 
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int  len ;

	/* copy str1 into str3 */
	strcpy(str3, str1);
	printf("strcpy( str3, str1) :  %s\n", str3 );

	/* concatenates str1 and str2 */
	strcat( str1, str2);
	printf("strcat( str1, str2):   %s\n", str1 );

	/* total lenghth of str1 after concatenation */
	len = strlen(str1);
	printf("strlen(str1) :  %d\n", len );


   return 0;
}