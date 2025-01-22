#include  <stdio.h>

void main(int argc, char *argv[])
{
    int myAge = 43;
    double myDouble = 43.78;
    char myChar = 'a';

    int* ptr = &myAge;
    double* ptrDouble = &myDouble;
    char* ptrChar = &myChar;

    printf("Int: %d\n", myAge);
    printf("%p\n", ptr);
    printf("%zu\n", sizeof(myAge));
    printf("%zu\n", sizeof(ptr));

    printf("Double: %1f\n", myDouble);
    printf("%p\n", ptrDouble);
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(ptrDouble));

    printf("Char: %c\n", myChar);
    printf("%p\n", ptrChar);
    printf("%zu\n", sizeof(myChar));
    printf("%zu\n", sizeof(ptrChar));

}