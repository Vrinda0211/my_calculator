#include "calculator.h" 
#include <stdio.h> 

int main() {
    double a = 10;
    double b = 2;

    printf("Addition: %.2f\n", add(a, b));
    printf("Subtraction: %.2f\n", subtract(a, b));
    printf("Multiplication: %.2f\n", multiply(a, b));
    printf("Division: %.2f\n", divide(a, b));
    printf("Power: %.2f\n", power(a, b));

    return 0;
}