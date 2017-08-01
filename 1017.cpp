#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n, t = 0, tmp = 0;
    cin >> s >> n;
    int len = s.length();

    t = (s[0] - '0') / n;
    if ((t != 0 && len > 1) || len == 1) cout << t;
    tmp = (s[0] - '0') % n;
    for (int i = 1; i < len; i++) {
        t = (tmp * 10 + s[i] - '0') / n;
        cout << t;
        tmp = (tmp * 10 + s[i] - '0') % n;
    }
    cout << " " << tmp;
    return 0;
}