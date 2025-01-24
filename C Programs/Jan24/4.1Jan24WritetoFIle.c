#include  <stdio.h>
int main()
{
    //write to file
    FILE *fptr;
    fptr = fopen("hello.txt", "w");
    fprintf(fptr, "Hello\n");
    fprintf(fptr, "How are you?\n");
    fprintf(fptr, "My name is ...\n");
    fprintf(fptr, "What's your name?");
    fclose(fptr);
    return 0;

}