#include <iostream>
#include <string>

using namespace std;

struct Dashboard
{
    string studentName;
    int courses;
    int completedCourses;
    double attendance;
};

void displayDashboard(const Dashboard &data)
{
    cout << "\n===== STUDENT DASHBOARD =====" << endl;
    cout << "Student: " << data.studentName << endl;
    cout << "Total Courses: " << data.courses << endl;
    cout << "Completed Courses: " << data.completedCourses << endl;
    cout << "Attendance: " << data.attendance << "%" << endl;
}
double calculateProgress(const Dashboard &data)
{
    if (data.courses == 0)
    {
        return 0.0;
    }

    return (static_cast<double>(data.completedCourses) / data.courses) * 100.0;
}
bool isValidDashboard(const Dashboard &data)
{
    return !data.studentName.empty() &&
           data.courses >= 0 &&
           data.completedCourses >= 0 &&
           data.completedCourses <= data.courses &&
           data.attendance >= 0.0 &&
           data.attendance <= 100.0;
}

int main()
{
    Dashboard data;

    cout << "Enter student name: ";
    getline(cin, data.studentName);
    cout << "Enter attendance percentage: ";
    cin >> data.attendance;
    if (!isValidDashboard(data))
    {
        cout << "Invalid dashboard information." << endl;
        return 1;
    }

    cout << "Enter total courses: ";
    cin >> data.courses;

    cout << "Enter completed courses: ";
    cin >> data.completedCourses;

    displayDashboard(data);
    cout << "Course Progress: "
         << calculateProgress(data) << "%" << endl;
    return 0;
}
