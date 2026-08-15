#include <iostream>
#include <string>

using namespace std;

bool login(const string& username, const string& password) {
    return username == "student" && password == "1234";
}

int main() {
    string username;
    string password;

    for (int attempt = 1; attempt <= 3; attempt++) {
        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if (username.empty() || password.empty()) {
            cout << "Username and password cannot be empty." << endl;
            continue;
        }

        if (login(username, password)) {
            cout << "Login successful." << endl;
            return 0;
        }

        cout << "Invalid username or password." << endl;
        cout << "Attempts remaining: " << 3 - attempt << endl;
    }

    cout << "Maximum login attempts exceeded." << endl;

    return 1;
}