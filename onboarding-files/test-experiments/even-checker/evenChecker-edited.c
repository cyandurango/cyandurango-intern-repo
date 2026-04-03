#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int int_num = 0;
    int check = 0;
    printf("Enter an integer: ");
    check = scanf("%d", &int_num);

    if (check != 1 || int_num < 0) {
        printf("ERROR: Invalid input. Only positive integer values are accepted.\n");
        return 1;
    }

    switch (int_num % 2){
        case 0: printf ("%d is even\n", int_num); break;
        defualt: printf ("%d is odd\n", int_num); break;
    }

    return 0;
}