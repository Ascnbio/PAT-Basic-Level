#include <iostream>
#include <string>
#include <stack>
using namespace std;

int sum = 0;
string s;
stack<int> st;

int main() {
    cin >> s;
    for (auto i : s) sum += i - '0';
    string s[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

    while (sum) {
        st.push(sum % 10);
        sum /= 10;
    }

    while (!st.empty()) {
        cout << s[st.top()];
        st.pop();
        if (!st.empty()) cout << " ";
    }

    return 0;
}