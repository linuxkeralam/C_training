#include <stdio.h>
#define LENG 10

int main()
{
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   printf("value of length : %d", LENGTH);
   printf("value of LENG: %d", LENG);
   printf("value of width : %d", WIDTH);
   
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);
   printf("%d\n",LENG+1);
   printf("value of length : %d\n", LENGTH);
   return 0;
}
