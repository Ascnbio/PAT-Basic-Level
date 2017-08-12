#include <iostream>
#include <string>
using namespace std;

int main() {
    int pat[6] = {0, 0, 0, 0, 0, 0};
    string str;
    cin >> str;
    for (auto c : str) {
        if (c == 'P') pat[0]++;
        else if (c == 'A') pat[1]++;
        else if (c == 'T') pat[2]++;
        else if (c == 'e') pat[3]++;
        else if (c == 's') pat[4]++;
        else if (c == 't') pat[5]++;
    }
    while (pat[0] || pat[1] || pat[2] || pat[3] || pat[4] || pat[5]) {
        if (pat[0] != 0) { cout << 'P'; pat[0]--; }
        if (pat[1] != 0) { cout << 'A'; pat[1]--; }
        if (pat[2] != 0) { cout << 'T'; pat[2]--; }
        if (pat[3] != 0) { cout << 'e'; pat[3]--; }
        if (pat[4] != 0) { cout << 's'; pat[4]--; }
        if (pat[5] != 0) { cout << 't'; pat[5]--; }
    }
    return 0;
}