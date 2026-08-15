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
bool isValidProfile(const StudentProfile& student) {
    return !student.name.empty() &&
           !student.rollNumber.empty() &&
           !student.email.empty();
}
void displayProfileSummary(const StudentProfile& student) {
    cout << "\n========================" << endl;
    cout << "     PROFILE SUMMARY" << endl;
    cout << "========================" << endl;
    cout << "Student: " << student.name << endl;
    cout << "Roll No: " << student.rollNumber << endl;
    cout << "Email:   " << student.email << endl;
    cout << "========================" << endl;
}

int main() {
    StudentProfile student;

    cout << "Enter name: ";
    getline(cin, student.name);

    cout << "Enter roll number: ";
    getline(cin, student.rollNumber);

    cout << "Enter email: ";
    getline(cin, student.email);

    if (!isValidProfile(student)) {
    cout << "Profile fields cannot be empty." << endl;
    return 1;
}

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
displayProfileSummary(student);
if (choice == 'y' || choice == 'Y') {
    updateEmail(student);

    cout << "\nUpdated Profile:" << endl;
    displayProfile(student);
    displayProfileSummary(student);
}

    return 0;
}
