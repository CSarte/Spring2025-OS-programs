#include  <stdio.h>
int main()
{
    int myNum = 15;
    float myFloatnum = 5.99;
    char myLetter = 'D';

    // Print them
    printf("%d\n", myNum);
    printf("%.2f\n", myFloatnum);
    printf("%c\n", myLetter);
    
    // Demonstrating one-line defintions
    int a = 1, b = 2, c = 3;

    printf("%d, %d, %d\n", a,b,c);
    

    
    char e = 65, f = 'Hello', g = 67;
    char text[] = "crazy"; // makeing a string 
    printf("%c\n", e);
    printf("%d\n", e);
    printf("%c\n", f); // only last character will be printed
    printf("%d\n", f);
    printf("%s\n", text);

    float f1 = 35e3;
    double d1 = 35E3;
    printf("%f\n", f1);// 6 digits is default
    printf("%1f\n", d1);

    printf("%.2f\n", f1);
    printf("%.3f\n", f1);
    printf("%.4f\n", f1);
    printf("%.0f\n", f1);

    //to get size of operator
    printf("%lu\n", sizeof(f1)); // print 4 because float is 4 bytes 
    printf("%lu\n", sizeof(f1)); // print 4 because float is 4 bytes 
    printf("%lu\n", sizeof(f)); // print 4 because float is 4 bytes 
    printf("%lu\n", sizeof(d1)); // print 4 because float is 4 bytes 


    return 0;
}