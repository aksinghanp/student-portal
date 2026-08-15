#include <iostream>
#include <string>

using namespace std;

struct Settings {
    string username;
    bool notifications;
    string theme;
};
void displaySettings(const Settings& settings) {
cout << "1. Display settings" << endl;
cout << "2. Change username" << endl;
cout << "3. Update notifications" << endl;
cout << "4. Change theme" << endl;
cout << "5. Exit" << endl;
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

void changeUsername(Settings& settings) {
    cout << "Enter new username: ";
    cin.ignore();
    getline(cin, settings.username);
}

int main() {
    Settings settings;

    cout << "Enter username: ";
    getline(cin, settings.username);

    settings.notifications = true;
    settings.theme = "Light";
    int choice;

    do {
        cout << "\n===== SETTINGS MENU =====" << endl;
        cout << "1. Display settings" << endl;
        cout << "2. Change username" << endl;
        cout << "3. Update notifications" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displaySettings(settings);
                break;

            case 2:
                changeUsername(settings);
                break;

            case 3:
                updateNotifications(settings);
                break;

            case 4:
                cout << "Exiting settings..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}