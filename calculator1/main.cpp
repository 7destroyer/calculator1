//калькулятор
#include "calculator.h"
#include <string>

using namespace std;

int main() {
    float num1, num2, res;

    cout << "Enter num1: " << endl;
    cin >> num1;

    cout << "Enter num2: " << endl;
    cin >> num2;

	string math;
	cout << "Enter math symbol: ";
	cin >> math;

    if (math == "+") {
        res = sum(num1, num2);
    }
    else if (math == "-") {
        res = substruct(num1, num2);
    }
    else if (math == "*") {
        res = multiply(num1, num2);
    }
    else if (math == "/") {
        res = divide(num1, num2);
    }
    else if (math == "%") {
        res = modulo(num1, num2);
    }
    else if (math == "sred") {
        res = average(num1, num2);
    }
    else if (math == "^") {
        res = square(num1);
    }
    else if (math == "temp") {
        res = celsiusToFahrenheit(num1);
    }
    else if (math == "^n") {
        res = power(num1, num2);
    }
    else if (math == "S") {
        res = circleArea(num1);
    }
    else {
        cout << "Error: " << endl;
    }
    cout << "Result: " << res << endl;
    return 0;
}