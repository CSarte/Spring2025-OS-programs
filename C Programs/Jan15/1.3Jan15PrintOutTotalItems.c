#include  <stdio.h>
int main()
{
    int numItems = 50;
    float cost = 9.99;

    printf("The %d items cost $ %.2f each and $ %.2f in total\n", numItems, cost, (numItems * cost));

    return 0;
}