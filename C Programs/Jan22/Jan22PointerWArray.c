// point of array is the first element of the array

#include  <stdio.h>

void main(int argc, char *argv[])
{

    int myNumbers[4] = {25, 50, 75, 100};
    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);
    printf("%d\n", *(myNumbers+1));
  


}