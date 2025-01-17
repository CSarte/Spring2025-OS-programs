#include  <stdio.h>
void main(int argc, char *argv[])
{
    int time = 10;
    while(time > 0){
        if (time % 2 == 0){
            printf("%d\n", time);
        }
        time--;
    }

}