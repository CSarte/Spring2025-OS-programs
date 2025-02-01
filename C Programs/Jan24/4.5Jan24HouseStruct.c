#include <stdio.h>

// Define the House struct
struct House {
    char address[100];
    int squareFeet;
    int bedrooms;
    int bathrooms;
    float price;
};

int main() {
    // Instantiate 3 House variables
    struct House house1 = {"frank lloyd wright way, lakeland", 200, 3, 2, 3.00};
    struct House house2 = {"ingraham ave, lakeland", 100, 2, 1, 2.00};
    struct House house3 = {"frank lloyd wright way, orlando", 2500, 4, 3, 5.00};

    // Print details of house1
    printf("House 1:\n");
    printf("Address: %s\n", house1.address);
    printf("Square Feet: %d\n", house1.squareFeet);
    printf("Bedrooms: %d\n", house1.bedrooms);
    printf("Bathrooms: %d\n", house1.bathrooms);
    printf("Price: $%.2f\n\n", house1.price);

    // Print details of house2
    printf("House 2:\n");
    printf("Address: %s\n", house2.address);
    printf("Square Feet: %d\n", house2.squareFeet);
    printf("Bedrooms: %d\n", house2.bedrooms);
    printf("Bathrooms: %d\n", house2.bathrooms);
    printf("Price: $%.2f\n\n", house2.price);

    // Print details of house3
    printf("House 3:\n");
    printf("Address: %s\n", house3.address);
    printf("Square Feet: %d\n", house3.squareFeet);
    printf("Bedrooms: %d\n", house3.bedrooms);
    printf("Bathrooms: %d\n", house3.bathrooms);
    printf("Price: $%.2f\n", house3.price);

    return 0;
}