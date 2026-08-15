#include <iostream>
#include <string>

using namespace std;

struct Settings {
    string username;
    bool notifications;
};

void displaySettings(const Settings& settings) {
    cout << "\n===== USER SETTINGS =====" << endl;
    cout << "Username: " << settings.username << endl;
    cout << "Notifications: "
         << (settings.notifications ? "Enabled" : "Disabled") << endl;
}

int main() {
    Settings settings;

    cout << "Enter username: ";
    getline(cin, settings.username);

    settings.notifications = true;

    displaySettings(settings);

    return 0;
}
