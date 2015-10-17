#include <stdio.h>
#include <stdlib.h>

main()
{
    //int *ptr;
    int *aptr,i,j=9;
    int ptr[]={1,2,3,4,5,6,7,8,9,10};
    //aptr = (int *) malloc(40);
    for (i=0;i<10;i++) {
        printf("%d\n",ptr[i]);
        //*aptr = 12;
        //j--;
        //aptr++;
    }
    aptr=ptr;
    for (i=0;i<10;i++) {
        //*aptr = 100;
        printf("%d\n",aptr[i]);
        //aptr++;
    }
    /*for (i=0;i<10;i++) {
        printf("%d\n",*aptr);
        aptr++;
    }*/

    //free(aptr);
}
