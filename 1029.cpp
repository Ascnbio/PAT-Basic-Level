#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> broke;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int size = s1.size();
    int i, j = 0;
    int flag = 1;
    for (i = 0; i < size; ) {
        if (s1[i] != s2[j]) {
            char c = s1[i];
            if (isalpha(c)) c = toupper(c);
            for (auto ch : broke) {
                if (c == ch) { flag = 0; break; }
            }
            if (flag) broke.push_back(c);
            i++;
        } else {
            i++; j++;
        }
        flag = 1;
    }
    for (auto ch : broke) cout << ch;
    return 0;
}