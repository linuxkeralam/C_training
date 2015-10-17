#include <stdio.h>

main()
{
   int sum = 17, count = 5;
   double mean;
   char ch='c';

   mean = sum / count;
   printf("Value of mean : %f\n", mean );
   mean = (double) sum / count;
   printf("Value of mean : %f\n", mean );
   sum = sum + ch;
   printf("value of sum=%d\n",sum);

}
