#include <iostream>
#include <stack>
using namespace std;

int main() {
    int a = 0, b = 0, d = 0;
    cin >> a >> b >> d;
    int sum = a + b;
    if (sum == 0) { cout << 0; return 0; }
    stack<int> result;
    while (sum) {
        result.push(sum % d);
        sum /= d;
    }
    while (!result.empty()) {
        cout << result.top();
        result.pop();
    }
    return 0;
}