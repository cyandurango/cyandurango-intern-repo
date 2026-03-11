#include <stdio.h>
#include <string.h>

struct AirportSystem {
    char f_n[10];       
    int Capacity;       
    double ticketPrice;
    int is_international;
    char PassengerName[50];
    int security_clearance;
    double baggageWeight;
};

int main() {
    struct AirportSystem a;
    strcpy(a.f_n, "GX-902");
    a.Capacity = 200;
    a.ticketPrice = 450.0;
    a.is_international = 1;
    strcpy(a.PassengerName, "sighreelss");
    a.security_clearance = 1;
    a.baggageWeight = 28.5;

    if (a.is_international == 1) {
        if (a.security_clearance == 1) {
            if (a.baggageWeight > 23.0) {
                if (a.ticketPrice < 1000.0) {
                    a.ticketPrice = a.ticketPrice + 75.25; 
                    printf("Applied %s to passenger %s\n", "OVERWEIGHT_INT_FEE_B", a.PassengerName);
                }
            }
        }
    }

    printf("\n--- BOARDING PASS ---\n");
    printf("Passenger: %s\n", a.PassengerName);
    printf("Flight: %s\n", a.f_n);
    printf("Total Cost: $%.2f\n", a.ticketPrice);
    if (a.baggageWeight > 23.0) {
        printf("Notice: Extra Baggage Fee Applied\n");
    }

    /* a.ticketPrice = 0.0;
    printf("Discount applied manually");
    */

    printf("\n--- BOARDING PASS ---\n");
    printf("Passenger: %s\n", a.PassengerName);
    printf("Flight: %s\n", a.f_n);
    printf("Total Cost: $%.2f\n", a.ticketPrice);
    if (a.baggageWeight > 23.0) {
        printf("Notice: Extra Baggage Fee Applied\n");
    }

    return 0;
}