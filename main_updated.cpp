#include <iostream>
#include <string>
using namespace std;

bool isPhishing(string url) {
    bool flag = false;

    if (url.find('@') != string::npos) {
        cout << "Reason: Contains '@' symbol\n";
        flag = true;
    }

    if (url.find("http://") != string::npos) {
        cout << "Reason: Uses HTTP (not secure)\n";
        flag = true;
    }

    if (url.find("login") != string::npos ||
        url.find("verify") != string::npos ||
        url.find("bank") != string::npos) {
        cout << "Reason: Contains suspicious keywords\n";
        flag = true;
    }

    if (url.length() > 50) {
        cout << "Reason: URL is too long\n";
        flag = true;
    }

    return flag;
}

int main() {
    int choice;
    string url;

    do {
        cout << "\n--- Phishing URL Detector ---\n";
        cout << "1. Check URL\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter URL: ";
            cin >> url;

            if (isPhishing(url)) {
                cout << "⚠️ Warning: Suspicious URL detected!\n";
            } else {
                cout << "✅ URL seems safe.\n";
            }
        }

    } while (choice != 2);

    return 0;
}
