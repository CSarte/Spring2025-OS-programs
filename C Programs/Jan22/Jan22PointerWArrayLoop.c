// point of array is the first element of the array

#include  <stdio.h>

void main(int argc, char *argv[])
{

    int myNumbers[4] = {25, 50, 75, 100};
    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);
    int length = sizeof(myNumbers)/ sizeof(myNumbers[0]);

    for(int i = 0; i < length; i++){
         printf("%d ", *(myNumbers+i));
    }
    printf("\n");
   
  


}