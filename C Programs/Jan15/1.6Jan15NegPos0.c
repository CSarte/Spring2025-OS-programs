#include  <stdio.h>
int main()
{
    int number;
    printf("Give me a number: \n");
    scanf("%d", &number);

    if(number > 0){
        printf("Your number is postive. \n");
    }else if(number < 0){
        printf("Your number is negative. \n");
    }else{
         printf("Your number is zero. \n");
    }
    

    return 0;
}