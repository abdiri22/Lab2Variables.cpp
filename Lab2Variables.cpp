#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declare variable
    int num1, num2;

    //User input
    cout << "\n";
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "\n";

    // Perform arithmetic operations
    // Addition
    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    // Subtraction
    int difference = num1 - num2;   
    cout << "Difference: " << difference << endl;

    // Multiplication
    int product = num1 * num2;
    cout << "Product: " << product << endl;

    // Division
    double division = num1 / num2;
    cout << "Division: " << division << endl;

    // Power
    double power = pow(num1, num2); 
    cout << " Power:  (1st number ot the power of the 2nd number):" << power << endl;

    // Square Root
    double squareRoot1 = sqrt(num1);    
    double squareRoot2 = sqrt(num2);
    cout << "Square Root of first number: " << squareRoot1 << endl;
    cout << "Square Root of second number: " << squareRoot2 << endl;

    // Modulus
    int modulus = num1 % num2;
    cout << "Modulus: " << modulus << endl; 
    cout << "\n";

    return 0;
}


