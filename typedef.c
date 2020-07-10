// https://www.tutorialspoint.com/cprogramming/c_typedef.htm

/*
The typedef allows you to redefine type into new name.
ex: "unsigned char" => BYTE
The onvention is to use UPPER_CASE for new types

Example:
    typedef unsigned char BYTE;
    BYTE b1, b2;
*/

#include <stdio.h>
#include <string.h>
 
// NOTE: When combining typedfe and struct, the name
// comes after the the struct at the end is no longer definining variables,
// it's actually the new type name!
//
// Ex: "Book" is not variable of "struct Books", but a alias to that type
// instead.
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
 
int main( ) {

   Book book;
 
   strcpy( book.title, "C Programming");
   strcpy( book.author, "Nuha Ali"); 
   strcpy( book.subject, "C Programming Tutorial");
   book.book_id = 6495407;
 
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);

   return 0;
}