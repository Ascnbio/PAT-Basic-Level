#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> output;
vector<char> broke;
int SHIFT = 0;

bool canType(char ch) {
    if (SHIFT == 1 && isupper(ch)) return false;
    for (auto c : broke) if (c == ch) return false;
    return true;
}

int main() {
    string s1, s2;
    // 防止第一行为空，不能直接使用cin，要使用getline
    getline(cin, s1);
    getline(cin, s2);
    if (s1.size() == 0) {
        cout << s2;
        return 0;
    }
    for (auto s : s1) {
        if (s == '+') SHIFT = 1;
        if (isalpha(s)) { 
            broke.push_back(s); 
            broke.push_back(tolower(s)); 
        }
        else broke.push_back(s);
    }

    for (auto s : s2) {
        if (canType(s)) output.push_back(s);
    }
    if (output.size() == 0) { cout << endl; return 0; }
    for(auto ch : output) cout << ch;
    return 0;
}