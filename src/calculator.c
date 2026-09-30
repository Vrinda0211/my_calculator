// Core logic
#include "calculator.h" 
#include <stdio.h> 

double add(double a, double b) { 
    return a + b;
} 

double subtract(double a, double b) { 
    return a - b; 
} 

double multiply(double a, double b) { 
    return a * b; 
} 

double divide(double a, double b) { 
    if (b == 0.0) {
        printf("Error: Division by zero!\n");         
        return 0.0;     
    }     
    return a / b; 
}

in calculator.c:	
double power(double a, int b) {
    double result = 1;

    if (b < 0) {
        b = -b;

        for (int i = 0; i < b; i++) {
            result *= a;
        }

        return 1 / result;
    }

    for (int i = 0; i < b; i++) {
        result *= a;
    }

    return result;
}


main:
printf("Power: %.2f\n", power(a, b));