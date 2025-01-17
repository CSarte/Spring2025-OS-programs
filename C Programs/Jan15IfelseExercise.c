//program to determine is number is negative, positive, or zero
//program to determine if number is odd or even

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

    if(number % 2 == 0){
        printf("Your number is also even.\n");
    }else{
        printf("Your number is also odd.\n");
    }
    

    return 0;
}