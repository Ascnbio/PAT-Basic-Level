#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool flag = true;
    while (cin >> a >> b) {
        if(b == 0) continue;
        if(!flag) cout << " ";
        else flag = false;
        cout << a * b << " " << b - 1;
    }
    if (flag) cout << "0 0";
    return 0;
}