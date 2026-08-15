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

int main() {
    StudentProfile student;

    cout << "Enter name: ";
    getline(cin, student.name);

    cout << "Enter roll number: ";
    getline(cin, student.rollNumber);

    cout << "Enter email: ";
    getline(cin, student.email);

    displayProfile(student);

    return 0;
}
