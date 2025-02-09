#include "calculator.h"

using namespace std;

int sum(int a, int b) {
    return a + b;
}

double substruct(double a, double b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int modulo(int a, int b) {
    return a % b;
}

double average(double a, double b) {
    return (a + b) / 2;
}

double square(double x) {
    return pow(x, 2);
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double power(double base, double exp) {
    return pow(base, exp);
}

double circleArea(double radius) {
    return 3.14 * pow(radius, 2);
}