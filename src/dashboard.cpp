#include <iostream>
#include <string>

using namespace std;

struct Dashboard {
    string studentName;
    int courses;
    int completedCourses;
};

void displayDashboard(const Dashboard& data) {
    cout << "\n===== STUDENT DASHBOARD =====" << endl;
    cout << "Student: " << data.studentName << endl;
    cout << "Total Courses: " << data.courses << endl;
    cout << "Completed Courses: " << data.completedCourses << endl;
}

int main() {
    Dashboard data;

    cout << "Enter student name: ";
    getline(cin, data.studentName);

    cout << "Enter total courses: ";
    cin >> data.courses;

    cout << "Enter completed courses: ";
    cin >> data.completedCourses;

    displayDashboard(data);

    return 0;
}
