#include "mymath/arithmetic.h"
int CArithmetic::add(int a, int b) {
    return a + b;
}

int CArithmetic::subtract(int a, int b) {
    return a - b;
}

int CArithmetic::multiply(int a, int b) {
    return a * b;
}

double CArithmetic::divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero!";
    }
    return static_cast<double>(a) / b;
}  
