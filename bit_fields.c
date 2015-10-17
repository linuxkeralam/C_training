#include <stdio.h>
#include <string.h>

/* define simple structure */
struct
{
  unsigned int widthValidated;
  unsigned int heightValidated;
  unsigned int LengthtValidated;
  unsigned int breadthtValidated;
} status1;

/* define a structure with bit fields */
struct
{
  unsigned int widthValidated : 1;
  unsigned int heightValidated : 1;
  unsigned int LengthtValidated : 1;
  unsigned int breadthtValidated : 1;
  unsigned int breadValidated : 29;
} status2;
 
int main( )
{
   printf( "Memory size occupied by status1 : %ld\n", sizeof(status1));
   printf( "Memory size occupied by status2 : %ld\n", sizeof(status2));

   return 0;
}
