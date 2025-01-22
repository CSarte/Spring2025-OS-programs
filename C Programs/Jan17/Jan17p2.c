#include  <stdio.h>

void main(int argc, char *argv[])
{

    int number;
    printf("Give me a number: \n");
    scanf("%d", &number);

    int number2;
    printf("Give me another number: \n");
    scanf("%d", &number2);

    int sum;

    int *ptr1 = &number;
    int *ptr2 = &number2;

    sum = *ptr1 + *ptr2; 


    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);


}