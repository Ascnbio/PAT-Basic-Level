#include <iostream>
#include <string>
using namespace std;

int n;
bool notPAT(const string &s) {
    for (auto c : s) {
        if (c != 'P' && c != 'A' && c != 'T') return true;
    }
    return false;
}

bool findPAT(const string &s) {
    int size = s.size();
    int p, t;
    int pat[3] = {0, 0, 0};
    for (auto c : s) {
        if (c == 'P') pat[0]++;
        else if(c == 'A') pat[1]++;
        else if(c == 'T') pat[2]++;
    }
    // for (auto c : pat) cout << c << endl;
    if (pat[0] != 1 || pat[1] == 0 || pat[2] != 1) return false;

    for (int i = 0; i < size; i++) {
        if (s[i] == 'P') p = i;
        if (s[i] == 'T') t = i;
    }

    if (p * (t - p - 1) == (size - t - 1)) return true;
    else return false;
}



int main() {
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++) cin >> str[i];

    for (int i = 0; i < n; i++) {
        if (!notPAT(str[i]) && findPAT(str[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}