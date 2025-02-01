#include  <stdio.h>
#include <string.h> 
int main()
{
    //write to file
    FILE* fptr;
   
    char dataToBeWritten[50] = "GeekforGeeks-A Computer "
                                "Science Poartal for Geeks";


    //read and print multiple lines
    fptr = fopen("Gfgtest.c", "w");

    if(fptr == NULL){
        printf("FIle failed to open");
    }else{
        printf("File is now opened\n");
        
        if(strlen(dataToBeWritten) > 0){
             
            fprintf(fptr, "Using fprintf: %s\n", dataToBeWritten);

          
            fputs("Using fputs: ", fptr);
            fputs(dataToBeWritten, fptr);
            fputs("\n", fptr);

            fwrite("Using fwrite: ", sizeof(char), strlen("Using fwrite: "), fptr);
            fwrite(dataToBeWritten, sizeof(char), strlen(dataToBeWritten), fptr);
            fwrite("\n", sizeof(char), 1, fptr);

            
            fclose(fptr);
            printf("Data written to file successfully.\n");
        }

    }
   

    return 0;

}