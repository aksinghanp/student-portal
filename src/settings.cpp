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

void updateNotifications(Settings& settings) {
    char choice;

    cout << "\nEnable notifications? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        settings.notifications = true;
    }
    else if (choice == 'n' || choice == 'N') {
        settings.notifications = false;
    }
    else {
        cout << "Invalid choice. Notifications remain unchanged." << endl;
    }
}

int main() {
    Settings settings;

    cout << "Enter username: ";
    getline(cin, settings.username);

    settings.notifications = true;

    displaySettings(settings);

    updateNotifications(settings);

    cout << "\nUpdated settings:" << endl;
    displaySettings(settings);

    return 0;
}