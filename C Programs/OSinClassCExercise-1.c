#include  <stdio.h>
int main()
{
    int temp;
    printf("What is the Temperature?: \n");
    scanf("%d", &temp);

    printf("%d \n", temp > 70 && temp < 85);

    return 0;
}