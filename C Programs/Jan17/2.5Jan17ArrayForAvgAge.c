#include  <stdio.h>
void main(int argc, char *argv[])
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += ages[i];
    }

    float avg = (float) sum / length;

    printf("The average is :%f\n", avg);

}