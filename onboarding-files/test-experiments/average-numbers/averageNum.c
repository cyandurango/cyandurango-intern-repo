#include <stdio.h>

// This is a function that takes an array and its size
// and then it calculates the average of all numbers
float get_avg(int arr[], int s) {
    float sum = 0; // Initialize sum to zero
    
    // Start a for loop to go through the array
    for (int i = 0; i < s; i++) {
        // Add the current element to the sum
        sum = sum + arr[i]; 
    } // End of for loop
    
    // Divide the sum by the size to get the average
    float a = sum / s; 
    
    return a; // Return the average value
}

int main() {
    // Array of integers
    int my_numbers[] = {10, 20, 30, 40, 50};
    
    // Call get_avg function
    float result = get_avg(my_numbers, 5);
    
    // Print the result to the screen
    printf("Average: %.2f\n", result); 
    
    return 0; // End of main
}