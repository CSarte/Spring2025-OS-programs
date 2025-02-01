#include  <stdio.h>
#include <string.h> 

int main() {

    FILE* fptr;
    char dataToBeRead[50];

  
    fptr = fopen("Gfgtest.c", "r");

    if (fptr == NULL) {
        printf("File failed to open\n");
    } else {
        printf("File is now opened\n");
        
     
        while (fgets(dataToBeRead, 50, fptr)) {
            printf("%s", dataToBeRead);  
        }

        fclose(fptr);  
    }

    return 0;
}