#include <iostream>
using namespace std;

// Define a structure for the two numbers
struct Numbers {
    int num1;
    int num2;
};

// Function to add two numbers
int add(Numbers nums) {
    return nums.num1 + nums.num2;
}

// Function to subtract two numbers
int subtract(Numbers nums) {
    return nums.num1 - nums.num2;
}

// Function to multiply two numbers
int multiply(Numbers nums) {
    return nums.num1 * nums.num2;
}

// Function to divide two numbers
float divide(Numbers nums) {
    return (float)nums.num1 / (float)nums.num2;
}

int main() {
    // Create a structure instance to hold two numbers
    Numbers nums;

    // Get input from user
    cout << "Enter two numbers:\n";
    cout << "Number 1: ";
    cin >> nums.num1;
    cout << "Number 2: ";
    cin >> nums.num2;

    // Perform arithmetic operations
    int sum = add(nums);
    int difference = subtract(nums);
    int product = multiply(nums);
    float quotient = divide(nums);

    // Output results to user
    cout << "The sum of " << nums.num1 << " and " << nums.num2 << " is " << sum << endl;
    cout << "The difference between " << nums.num1 << " and " << nums.num2 << " is " << difference << endl;
    cout << "The product of " << nums.num1 << " and " << nums.num2 << " is " << product << endl;
    cout << "The quotient of " << nums.num1 << " and " << nums.num2 << " is " << quotient << endl;

    return 0;
}
