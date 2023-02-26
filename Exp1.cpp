#include <iostream>
using namespace std;

// Define a student structure
struct Student {
    string name;
    int rollNo;
    string dob;
    string branch;
    double marks;
};

int main() {
    // Create an array of 3 student structures
    Student students[3];

    // Get student data from user input
    for (int i = 0; i < 3; i++) {
        cout << "Enter student " << i+1 << " details:\n";
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Roll No.: ";
        cin >> students[i].rollNo;
        cin.ignore();
        cout << "Date of Birth (dd/mm/yyyy): ";
        getline(cin, students[i].dob);
        cout << "Branch: ";
        getline(cin, students[i].branch);
        cout << "Marks: ";
        cin >> students[i].marks;
        cin.ignore();
        cout << endl;
    }

    // Display the student data
    cout << "Student Data:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Roll No.: " << students[i].rollNo << endl;
        cout << "Date of Birth: " << students[i].dob << endl;
        cout << "Branch: " << students[i].branch << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << endl;
    }

    return 0;
}
