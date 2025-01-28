#include  <stdio.h>
void main(int argc, char *argv[])
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    int min = 100;
    for(int i = 0; i < length; i++){
        if(ages[i] < min){
            min = ages[i];
        }
    }

    printf("The lowest number is :%d\n", min);

}