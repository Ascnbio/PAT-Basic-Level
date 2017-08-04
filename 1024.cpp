#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] == '-') cout << "-";
    int size = s.size();
    int e = s.find('E');
    string tmp;
    tmp = s.substr(e + 2, size);
    int after = stoi(tmp);
    
    if (s[e + 1] == '-') {
        if (0 < after) {
            cout << "0.";
            for (int i = 1; i < after; i++) {
                cout << 0;
            }
            for (int i = 1; i < e; i++) {
                if (s[i] >= '0' && s[i] <= '9') {
                    cout << s[i];
                }
            }
        } else {
            for (int i = 1; i < e; i++) {
                if (i == 2 - after) {
                    cout << ".";
                }
                if (s[i] >= '0' && s[i] <= '9') {
                    cout << s[i];
                }
            }
        }
    }
    else {
        if (e - 3 < after) {
            if (s[1] != '0')
                cout << s[1];
            for (int i = 3; i < e; i++) {
                if (s[i] >= '0' && s[i] <= '9') {
                    cout << s[i];
                }
            }
            for (int i = 0; i < after - (e - 3); i++) {
                cout << 0;
            }
        }
        else {
            if (s[1] != '0')
                cout << s[1];
            for (int i = 3; i < e; i++) {
                if (i == 3 + after) {
                    cout << ".";
                }
                if (s[i] >= '0' && s[i] <= '9') {
                    cout << s[i];
                }
            }
        }
    }
    return 0;
}