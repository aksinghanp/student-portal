#include <iostream>
#include <string>

using namespace std;

bool login(const string& username, const string& password) {
    return username == "student" && password == "1234";
}

int main() {
    string username;
    string password;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;
    if (username.empty() || password.empty()) {
    cout << "Username and password cannot be empty." << endl;
    return 1;
}

    if (login(username, password)) {
        cout << "Login successful." << endl;
    } else {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}
