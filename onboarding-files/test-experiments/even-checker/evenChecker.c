#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int int_num = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &int_num);

    if (int_num % 2 == 0) return printf("%d is even", int_num);
    else return printf("%d is odd", int_num);

    return 0;
}