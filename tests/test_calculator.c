// tests/test_calculator.c 
#include <assert.h>
#include <stdio.h>
#include "../src/calculator.h"

int main() {

    // Test Addition
    assert(add(2.0, 3.0) == 5.0);

    // Test Subtraction
    assert(subtract(5.0, 2.0) == 3.0);

    // Test Multiplication
    assert(multiply(4.0, 2.5) == 10.0);

    // Test Division
    assert(divide(10.0, 2.0) == 5.0);

    // Test division by zero
    assert(divide(5.0, 0.0) == 0.0);

    // Test Power
    assert(power(2.0, 3) == 8.0);

    // Test Power with exponent 0
    assert(power(5.0, 0) == 1.0);

    // Test negative exponent
    assert(power(2.0, -2) == 0.25);

    printf("All calculator test cases passed successfully!\n");

    return 0;
}