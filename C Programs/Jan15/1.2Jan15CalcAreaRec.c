#include  <stdio.h>
int main()
{


    //Calculating area of rectangle
    float width, length;
    printf("GETTING AREA OF THE RECTANGLE\n");
    printf("What is the width?: \n");
    scanf("%f", &width);
    printf("What is the length?: \n");
    scanf("%f", &length);

    float areaRectangle = width * length;

    printf("The area of the rectangle is %.2f\n", areaRectangle);
    return 0;
}