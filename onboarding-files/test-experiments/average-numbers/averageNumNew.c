#include <stdio.h>

/**
 * Returns the arithmetic mean of an integer array.
 * WARNING: 'arrSize' must be > 0.
 */   
float getAverage(int arr[], int arrSize) {
    float sum = 0;
    
    for (int i = 0; i < arrSize; i++) {
        sum += arr[i]; 
    }
    
    return sum / (float)arrSize;
}

int main() {
    int numArray[] = {10, 20, 30, 40, 50};
    int numArrSize = sizeof(numArray) / sizeof(numArray[0]); 
    
    printf("Average: %.2f\n", getAverage(numArray, numArrSize)); 
    
    return 0;
}