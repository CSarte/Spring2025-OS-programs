#include  <stdio.h>
int main()
{
    //write to file
    FILE *fptr;
   

    //read and print multiple lines
    fptr = fopen("hello.txt", "r");
    char myString[100];
    while(fgets(myString, 100, fptr)){
        printf("%s", myString);
    }
    fclose(fptr);

    return 0;

}