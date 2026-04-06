#include <iostream>
#include <string>
using namespace std;

bool isPhishing(string url) {
    if (url.find('@') != string::npos) {
        cout << "Reason: Contains '@' symbol\n";
        return true;
    }

    if (url.find("http://") != string::npos) {
        cout << "Reason: Uses HTTP (not secure)\n";
        return true;
    }

    if (url.find("login") != string::npos ||
        url.find("verify") != string::npos ||
        url.find("bank") != string::npos) {
        cout << "Reason: Contains suspicious keywords\n";
        return true;
    }

    if (url.length() > 50) {
        cout << "Reason: URL is too long\n";
        return true;
    }

    return false;
}

int main() {
    string url;

    cout << "Enter URL: ";
    cin >> url;

    if (isPhishing(url)) {
        cout << "⚠️ Warning: Suspicious URL detected!\n";
    } else {
        cout << "✅ URL seems safe.\n";
    }

    return 0;
}
