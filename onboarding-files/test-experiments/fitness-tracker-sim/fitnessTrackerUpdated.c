#include <stdio.h>

const float userWeight = 75.0;

float calculateCalories(float intensityFactor, float minutes) {
    return (userWeight * intensityFactor) * minutes;
} 

void trackActivity(const char* activityName, float intensityFactor, float minutes) {
    float calories = calculateCalories(intensityFactor, minutes);
    printf("Activity: %s\n", activityName);
    printf("Calories Burned: %.2f kcal\n\n", calories);
}

int main() {
    printf("\n===== Fitness Tracker Summary =====\n");
    trackActivity("Running", 0.12, 30.0);
    trackActivity("Cycling", 0.08, 45.0);
    trackActivity("Swimming", 0.15, 20.0);

    return 0;
}