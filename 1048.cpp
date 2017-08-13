#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    stack<char> as;
    stack<char> bs;
    stack<char> ans;
    if (a.size() > b.size()) {
        int size = a.size() - b.size();
        for (int i = 0; i < size; i++) bs.push('0');
    }
    for (auto c : a) as.push(c);
    for (auto c : b) bs.push(c);
    int cnt = 1;
    int flag = 0;
    while (!bs.empty()) {
        if (as.empty()) {
            flag = 1;
            break;
        }
        int i = as.top() - '0'; as.pop();
        int j = bs.top() - '0'; bs.pop();

        if (cnt % 2 == 1) {
            // 奇数位
            if (i + j == 10) ans.push('J');
            else if (i + j == 11) ans.push('Q');
            else if (i + j == 12) ans.push('K');
            else {
                char tmp = (i + j) % 13 + '0';
                ans.push(tmp);
            }
        }
        else {
            // 偶数位
            int tmp = j - i;
            if (tmp < 0) tmp += 10;
            ans.push(tmp + '0');
        }
        cnt++;
    }
    if (flag) {
        while (!bs.empty()) {
            ans.push(bs.top());
            bs.pop();
        }
    }
    while (!ans.empty()) {
        cout << ans.top();
        ans.pop();
    }
    return 0;
}