#include <stdio.h>

const float PI = 3.14159;

float calculate_circle_area() {
    float radius;
    printf("\nCalculating Circle Area... \nEnter radius: ");
    scanf("%f", &radius);
    return PI * radius * radius;
}

float calculate_rectangle_area() {
    float length, width;
    printf("\nCalculating Rectangle Area... \nEnter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    return length * width;
}

int main() {
    int choice;
    float area = 0.0;

    printf("\n[1] Circle \n[2] Rectangle \nSelect shape: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: area = calculate_circle_area();     break;
        case 2: area = calculate_rectangle_area();  break;
        default:
            printf("Invalid selection.\n");
            return 1;
    }

    printf("Area = %.2f\n", area);
    return 0;
}