#include  <stdio.h>
void main(int argc, char *argv[])
{
    
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <=10; j++){
            printf("%d ", (i*j));
        }
        printf("\n");
    }

}