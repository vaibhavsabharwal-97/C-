#include <iostream>
#include <string>
using namespace std;

// Define a structure for names
struct Name {
    string first;
    string last;
};

// Function to perform Bubble Sort on an array of names
void bubbleSort(Name names[], int numNames) {
    for (int i = 0; i < numNames - 1; i++) {
        for (int j = 0; j < numNames - i - 1; j++) {
            // Compare adjacent elements and swap if necessary
            if (names[j].last > names[j + 1].last) {
                Name temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Get the number of names from the user
    int numNames;
    cout << "How many names do you want to enter? ";
    cin >> numNames;

    // Create an array of names with the specified number of elements
    Name names[numNames];

    // Get input from the user for each name
    for (int i = 0; i < numNames; i++) {
        cout << "Enter the first name for name " << i + 1 << ": ";
        cin >> names[i].first;
        cout << "Enter the last name for name " << i + 1 << ": ";
        cin >> names[i].last;
    }

    // Sort the array of names using Bubble Sort
    bubbleSort(names, numNames);

    // Output the sorted list of names
    cout << "\nSorted list of names:\n";
    for (int i = 0; i < numNames; i++) {
        cout << names[i].last << ", " << names[i].first << endl;
    }

    return 0;
}
