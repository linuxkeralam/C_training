#include <string.h>
#include <stdio.h>
 
union Data
{
   int i;
   float f;
   char  str[20];
};
 
int main( )
{
   union Data data;        

   printf( "Memory size occupied by data : %ld\n", sizeof(data));
   strcpy(data.str,"Tutorials");
   printf("Data.str = %s\n",data.str);
   printf("Data.i = %d\n",data.i);
   printf("Data.f = %f\n",data.f);
   data.i = 100;
   printf("Data.i = %d\n",data.i);
   printf("Data.f = %f\n",data.f);
   printf("Data.str = %s\n",data.str);
   data.f = 100.12344;
   printf("Data.f = %f\n",data.f);
   printf("Data.i = %d\n",data.i);
   printf("Data.str = %s\n",data.str);
   return 0;
}
