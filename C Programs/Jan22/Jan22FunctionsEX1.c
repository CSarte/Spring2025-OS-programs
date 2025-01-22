#include  <stdio.h>

//function for area from w and h
// function for radius
float convertToC(float f){
    return (f - 32.0) * (5.0 / 9.0);
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
    return 0;


}