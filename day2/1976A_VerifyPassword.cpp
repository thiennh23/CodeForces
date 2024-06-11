#include <iostream>
#include <string>
using namespace std;

bool solve(int n, const string& password) {
    int previous = -1, now = -1; // Initialize now and previous
    // now: 1 is digit and 2 is letter

    for (int i = 0; i < n; i++) {
        if (password[i] >= '0' && password[i] <= '9')
            now = 1;
        else if (password[i] >= 'a' && password[i] <= 'z')
            now = 2;
        else
            return false;

        switch (now) {
            case 1:
                if (i == 0) {
                    previous = now;
                } else if (i >= 1) {
                    if (previous != 1)
                        return false;
                    else if (password[i - 1] > password[i])
                        return false;
                }
                break;
            case 2:
                if (i == 0) {
                    previous = now;
                } else if (i >= 1) {
                    if (password[i - 1] > password[i])
                        return false;
                }
                break;
        }
    }

    return true;
}

int main() {
    int t, n;
    cin >> t; //number of test case
    while (t--) {
        cin >> n; //number of character of string/char
        string password;
        cin >> password;

        if (solve(n, password))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
