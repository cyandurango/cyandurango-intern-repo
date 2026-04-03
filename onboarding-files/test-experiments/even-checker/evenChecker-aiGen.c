#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int int_num = 0;
    int result = 0;
    printf("Enter an integer: ");
    result = scanf("%d", &int_num);

    if (result != 1) {
        printf("ERROR: Invalid input. Please enter positve integer values only");
        return 1;
    }

    if (int_num < 0) {
        printf("ERROR: Invalid input. Negative integer values are not allowed.");
        return 1;
    }

    printf("%d is %s.\n", int_num, (int_num % 2 == 0) ? "even" : "odd");

    return 0;
}