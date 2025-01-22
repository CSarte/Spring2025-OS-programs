#include<stdio.h>
#include<math.h>
//function for area from w and h
// function for radius
double calcAreaCircle(double r){

    return M_PI * pow(r, 2);
}

int main()
{
    // get radius of circle
    double radius;
    printf("Give me the radius of the circle: \n");
    scanf("%lf", &radius);

    // convert temp to celsuis with function
    double area = calcAreaCircle(radius);

    printf("%.2lf\n", area);
    return 0;


}