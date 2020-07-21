// https://www.tutorialspoint.com/cprogramming/c_data_types.htm

/*

Type            Storage size    Value range
char            1 byte          -128 to 127 or 0 to 255
unsigned char   1 byte          0 to 255
signed char     1 byte          -128 to 127
int             2 or 4 bytes    -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
unsigned int    2 or 4 bytes    0 to 65,535 or 0 to 4,294,967,295
short           2 bytes         -32,768 to 32,767
unsigned short  2 bytes         0 to 65,535
long            8 bytes         -9223372036854775808 to 9223372036854775807
unsigned long   8 bytes         0 to 18446744073709551615

To get the exact size of a type or a variable on a particular platform, you can use the sizeof 
operator. The expressions sizeof(type) yields the storage size of the object or type in bytes.
*/


#include <stdio.h>

/*
sizeof(char) :   1
sizeof(unsigned char) :   1
sizeof(signed char) :   1
sizeof(int) :   4
sizeof(unsigned int) :   4
sizeof(short) :   2
sizeof(unsigned short) :   2
sizeof(long) :   8
sizeof(unsigned long) :   8
*/
int main(int argc, char** argv) {

    printf("sizeof(char) :   %lu\n", sizeof(char));
    printf("sizeof(unsigned char) :   %lu\n", sizeof(unsigned char));
    printf("sizeof(signed char) :   %lu\n", sizeof(signed char));

    printf("sizeof(int) :   %lu\n", sizeof(int));
    printf("sizeof(unsigned int) :   %lu\n", sizeof(unsigned int));

    printf("sizeof(short) :   %lu\n", sizeof(short));
    printf("sizeof(unsigned short) :   %lu\n", sizeof(unsigned short));

    printf("sizeof(long) :   %lu\n", sizeof(long));
    printf("sizeof(unsigned long) :   %lu\n", sizeof(unsigned long));

    return 0;
}
