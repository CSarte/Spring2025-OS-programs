#include  <stdio.h>

//function for area from w and h
// function for radius
float calcArea(float height, float width){
    
    return height * width;
}

int main()
{
    // get height
    float height;
    printf("Give me a height: \n");
    scanf("%f", &height);

    // get width
    float width;
    printf("Give me a width: \n");
    scanf("%f", &width);

    // convert temp to celsuis with function
    float area = calcArea(height, width);

    printf("%.2f\n", area);
    return 0;


}