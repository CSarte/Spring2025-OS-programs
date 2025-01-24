#include  <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr;
   ptr = calloc(4, sizeof(*ptr));

//write to memory
   *ptr = 2;
   ptr[1] = 4;
   ptr[2] = 6;

    // read from memeory
    printf("%d\n", *ptr);
    prinf(" %d %d %d", ptr[1], ptr[2], ptr[3]);

    // to free use free(ptr1) and set ptr to NULL to prevent accidently being used


    return 0;
}