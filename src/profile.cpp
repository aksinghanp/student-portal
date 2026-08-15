#include <iostream>
#include <string>

using namespace std;

struct StudentProfile {
    string name;
    string rollNumber;
    string email;
};

void displayProfile(const StudentProfile& student) {
    cout << "\n--- Student Profile ---" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Email: " << student.email << endl;
}

void updateEmail(StudentProfile& student) {
    cout << "Enter new email: ";
    getline(cin, student.email);
}

int main() {
    StudentProfile student;

    cout << "Enter name: ";
    getline(cin, student.name);

    cout << "Enter roll number: ";
    getline(cin, student.rollNumber);

    cout << "Enter email: ";
    getline(cin, student.email);

    displayProfile(student);
    char choice;

cout << "\nDo you want to update your email? (y/n): ";
cin >> choice;
cin.ignore();

if (choice == 'y' || choice == 'Y') {
    updateEmail(student);

    cout << "\nUpdated Profile:" << endl;
    displayProfile(student);
}

    return 0;
}
