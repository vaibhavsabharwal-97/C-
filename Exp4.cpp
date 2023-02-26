#include <iostream>
using namespace std;

// Define a structure for complex numbers
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiply(Complex c1, Complex c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    // Create two complex numbers
    Complex c1, c2;

    // Get input from user for the first complex number
    cout << "Enter the first complex number:\n";
    cout << "Real Part: ";
    cin >> c1.real;
    cout << "Imaginary Part: ";
    cin >> c1.imag;

    // Get input from user for the second complex number
    cout << "Enter the second complex number:\n";
    cout << "Real Part: ";
    cin >> c2.real;
    cout << "Imaginary Part: ";
    cin >> c2.imag;

    // Perform arithmetic operations
    Complex sum = add(c1, c2);
    Complex difference = subtract(c1, c2);
    Complex product = multiply(c1, c2);

    // Output results to user
    cout << "The sum of " << c1.real << " + " << c1.imag << "i and " << c2.real << " + " << c2.imag << "i is " << sum.real << " + " << sum.imag << "i" << endl;
    cout << "The difference between " << c1.real << " + " << c1.imag << "i and " << c2.real << " + " << c2.imag << "i is " << difference.real << " + " << difference.imag << "i" << endl;
    cout << "The product of " << c1.real << " + " << c1.imag << "i and " << c2.real << " + " << c2.imag << "i is " << product.real << " + " << product.imag << "i" << endl;

    return 0;
}
