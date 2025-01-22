#include  <stdio.h>
//getting memory address with pointers
void main(int argc, char *argv[])
{
    int myAge = 43;

    int* ptr = &myAge;

    printf("%d\n", myAge);
    printf("%p\n", &myAge);

    printf("%p\n", ptr);


    printf("%d\n", *ptr);

}