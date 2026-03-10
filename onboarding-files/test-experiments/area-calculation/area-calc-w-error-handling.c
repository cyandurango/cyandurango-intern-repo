#include <stdio.h>

const float PI = 3.14159;

/**
 * Calculates circle area with input validation.
 * Returns -1.0 if input is invalid or negative.
 */
float calculate_circle_area() {
    float radius;
    printf("\nCalculating Circle Area... \nEnter radius: ");
    if (scanf("%f", &radius) != 1|| radius < 0) return -1.0;
    
    return PI * radius * radius;
}

/**
 * Calculates rectangle area with guard clauses.
 */
float calculate_rectangle_area() {
    float length, width;
    printf("\nCalculating Rectangle Area...\n");

    printf("Enter length: ");
    if (scanf("%f", &length) != 1 || length < 0) return -1.0;

    printf("Enter width: ");
    if (scanf("%f", &width) != 1 || width < 0) return -1.0;

    return length * width;
}

int main() {
    int choice;
    float area = 0.0;

    printf("\n[1] Circle \n[2] Rectangle \nSelect shape: ");
    
    // Validate choice input
    if (scanf("%d", &choice) != 1) {
        printf("Error: Please enter a numeric choice.\n");
        return 1;
    }

    switch (choice) {
        case 1: area = calculate_circle_area();     break;
        case 2: area = calculate_rectangle_area();  break;
        default:
            printf("Invalid selection.\n");
            return 1;
    }

    // Final check for the sentinel error value
    if (area < 0) {
        printf("Error: Invalid input provided for dimensions.\n");
        return 1;
    }

    printf("Area = %.2f\n", area);
    return 0;
}