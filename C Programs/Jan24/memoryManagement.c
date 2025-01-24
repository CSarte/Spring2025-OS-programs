#include  <stdio.h>
#include <stdlib.h>
int main()
{
    /*in C, you have to manage memory yourseld. Statuic memory is reserved for variables before the program runs
*/
    int student[20];
    prinf("%lu", sizeof(students)); //prints 80 bytes 20 elements *4 bytes

    // Dynamic memory  alllocated afte program runs

    int *ptr1 = malloc(size); // specify number of bytes you want to claim - returns first memeory location in block
    int *ptr2 = calloc(amount, size) //specifies amoutn of items to allocate size


    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%d", numStudents *sizeof(*students)); //should print 28


    return 0;
}