#include  <stdio.h>
#include<math.h>
//function for area from w and h
// function for radius
float convertToC(float f){
    return (f - 32.0) * (5.0 / 9.0);
}

float calcArea(float height, float width){
    
    return height * width;
}

double calcAreaCircle(double r){

    return M_PI * pow(r, 2);
}



int main()
{
    // set temperature in fahrenheit
    float temp;
    printf("Give me a temperature in F: \n");
    scanf("%f", &temp);

    // convert temp to celsuis with function
    float tempC = convertToC(temp);

    printf("%f\n", tempC);


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

    // get radius of circle
    double radius;
    printf("Give me the radius of the circle: \n");
    scanf("%lf", &radius);

    // convert temp to celsuis with function
    double area2 = calcAreaCircle(radius);

    printf("%.2lf\n", area2);

    return 0;


}