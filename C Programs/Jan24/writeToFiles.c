#include  <stdio.h>
int main()
{
    //write to file
    FILE *fptr;
    fptr = fopen("filename.txt", "w");
    fprintf(fptr, "Some Text");
    fclose(fptr);
    
    //append to file
    fptr = fopen("filename.txt", "a");
    fprintf(fptr, "\nHi everybody!");
    fclose(fptr);


    // reading files
    fprt = fopen("filename.txt", "r");
    char myString[100];
    fgets(myString, 100, fptr);
    printf("%s", myString);
    fclose(fptr);

    //read and print multiple lines
    fptr = fopen("filename.txt", "r");
    char myString[100];
    if(fptr != null){
        while(fgets(myString, 100, fptr)){
            printf("%s", myString);
        }
    }
    fclose(fptr);

    //Try fprint, fpwrite, fgets, fread
    fptr = fopen("test.txt", "w");
    fprintf(fptr, "Hello");
    fclose(fptr);

    // get number of characters
    FILE* fp;
    fp = open("test.txt", "r");
    fseek(fp, 0, SEEK_END);
    printf("%ld", ftell(fp));

    fclose(fp);

    
    return 0;

}