#include <stdio.h>

// Global user weight in kg
float userWeight = 75.0;

// WET Function 1: Running
void trackRunning(float minutes) {
    float intensityFactor = 0.12; // Running intensity
    // Calculation logic repeated
    float calories = (userWeight * intensityFactor) * minutes; 
    printf("Activity: Running\n");
    printf("Calories Burned: %.2f kcal\n\n", calories);
}

// WET Function 2: Cycling
void trackCycling(float minutes) {
    float intensityFactor = 0.08; // Cycling intensity
    // Identical calculation logic repeated
    float calories = (userWeight * intensityFactor) * minutes; 
    printf("Activity: Cycling\n");
    printf("Calories Burned: %.2f kcal\n\n", calories);
}

// WET Function 3: Swimming
void trackSwimming(float minutes) {
    float intensityFactor = 0.15; // Swimming intensity
    // Identical calculation logic repeated again
    float calories = (userWeight * intensityFactor) * minutes; 
    printf("Activity: Swimming\n");
    printf("Calories Burned: %.2f kcal\n\n", calories);
}

int main() {
    printf("--- Fitness Tracker Summary ---\n\n");

    trackRunning(30.0);
    trackCycling(45.0);
    trackSwimming(20.0);

    return 0;
}