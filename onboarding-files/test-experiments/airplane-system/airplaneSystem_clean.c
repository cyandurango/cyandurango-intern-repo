#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    char flightNumber[10]; 
    int capacity;         
    bool isInternational; 
} Flight;

typedef struct {
    char passengerName[50]; 
    double baggageWeight;
    bool isSecurityClearanceGranted;   
} Passenger;

typedef struct {
    Flight flight;
    Passenger passenger;
    double ticketPrice;
} BoardingPass;

const double OVERWEIGHT_FEE = 75.25;
const double MAX_BAGGAGE_WEIGHT = 23.0;
const double MAX_TICKET_PRICE_FOR_FEE = 1000.0;
const char *OVERWEIGHT_FEE_CODE = "OVERWEIGHT_INT_FEE_B";

Flight createFlight(const char *flightNumber, int capacity, bool isInternational) {
    Flight flight;
    strncpy(flight.flightNumber, flightNumber, sizeof(flight.flightNumber) - 1);
    flight.flightNumber[sizeof(flight.flightNumber) - 1] = '\0'; // Ensures null-termination
    flight.capacity = capacity;
    flight.isInternational = isInternational;

    return flight;
}

Passenger createPassenger(const char *name, bool isSecurityClearanceGranted, double baggageWeight) {
    Passenger passenger;
    strncpy(passenger.passengerName, name, sizeof(passenger.passengerName) - 1);
    passenger.passengerName[sizeof(passenger.passengerName) - 1] = '\0'; // Ensures null-termination
    passenger.baggageWeight = baggageWeight;
    passenger.isSecurityClearanceGranted = isSecurityClearanceGranted;

    return passenger;
}

BoardingPass createBoardingPass(Flight flight, Passenger passenger, double basePrice) {
    BoardingPass pass;
    pass.flight = flight;
    pass.passenger = passenger;
    pass.ticketPrice = basePrice;

    return pass;
}

void applyInternationalOverweightFee(BoardingPass *pass) {
    if (!pass->flight.isInternational || !pass->passenger.isSecurityClearanceGranted) {
        return;    
    } 
    if (pass->passenger.baggageWeight > MAX_BAGGAGE_WEIGHT && pass->ticketPrice < MAX_TICKET_PRICE_FOR_FEE) {
        pass->ticketPrice += OVERWEIGHT_FEE;
        printf("Applied %s to passenger %s\n", OVERWEIGHT_FEE_CODE, pass->passenger.passengerName);
    }
}

void printBoardingPass(const BoardingPass *pass) {
    printf("\n--- BOARDING PASS ---\n");
    printf("Passenger: %s\n", pass->passenger.passengerName);
    printf("Flight: %s\n", pass->flight.flightNumber);
    printf("Total Cost: $%.2f\n", pass->ticketPrice);
    if (pass->passenger.baggageWeight > MAX_BAGGAGE_WEIGHT) {
        printf("Notice: Extra Baggage Fee Applied\n");
    }
}

int main(){
    Flight f1 = createFlight("GX-902", 200, true);
    Flight f2 = createFlight("GX-903", 150, false);
    Passenger p1 = createPassenger("John Doe", true, 28.5);
    Passenger p2 = createPassenger("Jane Smith", true, 20.0);
    Passenger p3 = createPassenger("Alice Brown", false, 30.0);
    BoardingPass bp1 = createBoardingPass(f1, p1, 450.0);
    BoardingPass bp2 = createBoardingPass(f1, p2, 450.0);
    BoardingPass bp3 = createBoardingPass(f2, p3, 300.0);

    applyInternationalOverweightFee(&bp1);
    applyInternationalOverweightFee(&bp2);
    applyInternationalOverweightFee(&bp3);

    printBoardingPass(&bp1);
    printBoardingPass(&bp2);
    printBoardingPass(&bp3);

    return 0;
}

